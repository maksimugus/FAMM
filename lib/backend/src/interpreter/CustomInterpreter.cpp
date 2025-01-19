
#include "CustomInterpreter.h"

void CustomInterpreter::run() {
    while (pc < program.size()) {

        if (auto instr_or_value = program[pc]; std::holds_alternative<Instr>(instr_or_value)) {
            switch (std::get<Instr>(instr_or_value)) {
            case NOP:
                ++pc;
                break;
            case ADD:
                instr_add();
                break;
            case SUB:
                instr_sub();
                break;
            case AND:
                instr_and();
                break;
            case OR:
                instr_or();
                break;
            case NOT:
                instr_not();
                break;
            case PRINT:
                instr_print();
                break;
            case LOAD:
                instr_load();
                break;
            case STORE:
                instr_store();
                break;
            case GOTO:
                instr_goto();
                break;
            case PUSH:
                instr_push();
                break;
            case DECL_FUNC:
                instr_decl_func();
                break;
            case FRAME_PUSH:
                instr_frame_push();
                break;
            case FRAME_POP:
                instr_frame_pop();
                break;
            case CALL:
                instr_call();
                break;
            case RET:
                instr_ret();
                break;
            case IF_EQ:
                instr_if_eq();
                break;
            case IF_NE:
                instr_if_ne();
                break;
            case IF_LT:
                instr_if_lt();
                break;
            case IF_GT:
                instr_if_gt();
                break;
            case IF_LE:
                instr_if_le();
                break;
            case IF_GE:
                instr_if_ge();
                break;
            case IF:
                instr_if();
                break;
            case ARR_ACC:
                instr_arr_access();
                break;
            default:
                std::cerr << "Unknown instruction at pc " << pc << std::endl;
                return;
            }
        } else {
            std::cerr << "Error: unexpected value in program at pc " << pc << std::endl;
            ++pc;
        }
    }
}

Frame* CustomInterpreter::current_frame() {
    if (frameStack.empty()) {
        return nullptr;
    }
    return frameStack.top();
}

void CustomInterpreter::push_sibling_frame() {
    frameStack.emplace();
}

void CustomInterpreter::push_child_frame() {
    Frame* parent = current_frame();
    frameStack.emplace(parent);
}

void CustomInterpreter::frame_pop() {
    if (!frameStack.empty()) {
        const Frame* top_frame = frameStack.top();
        frameStack.pop();
        delete top_frame;
    } else {
        std::cerr << "Error: frame stack underflow on frame_pop" << std::endl;
    }
}
void CustomInterpreter::frame_pop_on_return() {
    const Frame* frame = current_frame();
    while (frame != nullptr) {
        const Frame* parent = frame->parentFrame;
        frame_pop(); // todo check ну ваще норм должно быть
        frame = parent;
    }
}

void CustomInterpreter::instr_add() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_add" << std::endl;
        return;
    }

    if (frame->operandStack.size() < 2) {
        std::cerr << "Error: operand stack underflow in instr_add" << std::endl;
        return;
    }

    const Value b = frame->operandStack.top();
    frame->operandStack.pop();
    const Value a = frame->operandStack.top();
    frame->operandStack.pop();

    if (std::holds_alternative<int64_t>(a) && std::holds_alternative<int64_t>(b)) {
        int64_t result = std::get<int64_t>(a) + std::get<int64_t>(b);
        frame->operandStack.emplace(result);
    } else {
        std::cerr << "Error: type mismatch in instr_add" << std::endl;
    }

    ++pc;
}

void CustomInterpreter::instr_sub() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_sub" << std::endl;
        return;
    }

    if (frame->operandStack.size() < 2) {
        std::cerr << "Error: operand stack underflow in instr_add" << std::endl;
        return;
    }

    const Value b = frame->operandStack.top();
    frame->operandStack.pop();
    const Value a = frame->operandStack.top();
    frame->operandStack.pop();

    if (std::holds_alternative<int64_t>(a) && std::holds_alternative<int64_t>(b)) {
        int64_t result = std::get<int64_t>(a) - std::get<int64_t>(b);
        frame->operandStack.emplace(result);
    } else {
        std::cerr << "Error: type mismatch in instr_sub" << std::endl;
    }

    ++pc;
}

void CustomInterpreter::instr_and() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_and" << std::endl;
        return;
    }

    if (frame->operandStack.size() < 2) {
        std::cerr << "Error: operand stack underflow in instr_and" << std::endl;
        return;
    }

    const Value b = frame->operandStack.top();
    frame->operandStack.pop();
    const Value a = frame->operandStack.top();
    frame->operandStack.pop();

    if (std::holds_alternative<bool>(a) && std::holds_alternative<bool>(b)) {
        int64_t result = std::get<bool>(a) && std::get<bool>(b);
        frame->operandStack.emplace(result);
    } else {
        std::cerr << "Error: type mismatch in instr_and" << std::endl;
    }

    ++pc;
}

void CustomInterpreter::instr_or() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_or" << std::endl;
        return;
    }

    if (frame->operandStack.size() < 2) {
        std::cerr << "Error: operand stack underflow in instr_or" << std::endl;
        return;
    }

    const Value b = frame->operandStack.top();
    frame->operandStack.pop();
    const Value a = frame->operandStack.top();
    frame->operandStack.pop();

    if (std::holds_alternative<bool>(a) && std::holds_alternative<bool>(b)) {
        int64_t result = std::get<bool>(a) || std::get<bool>(b);
        frame->operandStack.emplace(result);
    } else {
        std::cerr << "Error: type mismatch in instr_or" << std::endl;
    }

    ++pc;
}

void CustomInterpreter::instr_not() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_not" << std::endl;
        return;
    }

    if (frame->operandStack.empty()) {
        std::cerr << "Error: operand stack underflow in instr_not" << std::endl;
        return;
    }

    const Value a = frame->operandStack.top();
    frame->operandStack.pop();

    if (std::holds_alternative<bool>(a)) {
        bool result = !std::get<bool>(a);
        frame->operandStack.emplace(result);
    } else {
        std::cerr << "Error: type mismatch in instr_not" << std::endl;
    }

    ++pc;
}

void CustomInterpreter::instr_print() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_print" << std::endl;
        return;
    }

    if (frame->operandStack.empty()) {
        std::cerr << "Error: operand stack underflow in instr_print" << std::endl;
        return;
    }

    const Value val = frame->operandStack.top();
    frame->operandStack.pop();

    if (std::holds_alternative<int64_t>(val)) {
        std::cout << std::get<int64_t>(val);
    } else if (std::holds_alternative<bool>(val)) {
        std::cout << (std::get<bool>(val) ? "true" : "false");
    } else {
        std::cerr << "Error: unsupported type in instr_print" << std::endl;
    }

    ++pc;
}

// push "a"
// load
// push 1
// add

void CustomInterpreter::instr_load() {
    const ValueOrInstr token = program[++pc];
    if (!std::holds_alternative<Value>(token)) {
        std::cerr << "Error: Expected value after LOAD at pc " << pc << std::endl;
        return;
    }

    if (const auto address_value = std::get<Value>(token); std::holds_alternative<std::string>(address_value)) {
        const auto address = std::get<std::string>(address_value);

        Frame* frame = current_frame();
        while (frame != nullptr) {
            if (auto it = frame->localVariables.find(address); it != frame->localVariables.end()) {
                current_frame()->operandStack.push(it->second);
                ++pc;
                return;
            }
            frame = frame->parentFrame; // Move to the parent frame if not found
        }
        ++pc;
        std::cerr << "Error: Address '" << address << "' not found in any frame!" << std::endl;
        return;
    }
    ++pc;
    std::cerr << "Error: Expected string address in instr_load!" << std::endl;
}

void CustomInterpreter::instr_store() {
    const Value value_to_store = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    const ValueOrInstr token = program[++pc];
    if (!std::holds_alternative<Value>(token)) {
        std::cerr << "Error: Expected value after STORE at pc " << pc << std::endl;
        return;
    }

    if (const auto address_value = std::get<Value>(token); std::holds_alternative<std::string>(address_value)) {
        const auto address = std::get<std::string>(address_value);

        Frame* frame = current_frame();
        while (frame != nullptr) {
            if (auto it = frame->localVariables.find(address); it != frame->localVariables.end()) {
                it->second = value_to_store;
                return;
            }
            frame = frame->parentFrame;
        }

        current_frame()->localVariables.emplace(address, value_to_store);
        ++pc;
        return;
    }
    ++pc;
    std::cerr << "Error: Expected string address in instr_store!" << std::endl;
}

void CustomInterpreter::instr_goto() {
    const ValueOrInstr token = program[++pc];
    if (!std::holds_alternative<Value>(token)) {
        std::cerr << "Error: Expected value after GOTO at pc " << pc << std::endl;
        return;
    }

    const auto value = std::get<Value>(token);
    if (!std::holds_alternative<int64_t>(value)) {
        std::cerr << "Error: Expected an integer address in instr_goto!" << std::endl;
        return;
    }

    const auto line_number = std::get<int64_t>(value);
    if (line_number < 0 && line_number >= program.size()) {
        std::cerr << "Error: Invalid argument for goto at pc " << pc << std::endl;
        return;
    }

    pc = line_number;
}
// push vector(1,2,3)
// push "a"
// store
void CustomInterpreter::instr_push() {
    ++pc;
    if (pc >= program.size()) {
        std::cerr << "Error: program ended unexpectedly after PUSH at pc " << pc << std::endl;
        return;
    }

    if (const auto instr_or_value = program[pc]; std::holds_alternative<Value>(instr_or_value)) {
        const auto val = std::get<Value>(instr_or_value);
        Frame* frame   = current_frame();
        if (frame == nullptr) {
            std::cerr << "Error: no current frame in instr_push" << std::endl;
            return;
        }
        frame->operandStack.push(val);
    } else {
        std::cerr << "Error: expected value after PUSH at pc " << pc << std::endl;
    }
    ++pc;
}

void CustomInterpreter::instr_frame_push() {
    push_child_frame();
    ++pc;
}

void CustomInterpreter::instr_frame_pop() {
    frame_pop();
    ++pc;
}


void CustomInterpreter::instr_decl_func() {
    ++pc;
    if (pc >= program.size()) {
        std::cerr << "Error: program ended unexpectedly after PUSH at pc " << pc << std::endl;
        return;
    }

    const auto el = program[pc];
    auto name     = std::get<std::string>(std::get<Value>(el));
    ++pc;

    if (pc >= program.size()) {
        std::cerr << "Error: program ended unexpectedly after parameter names at pc " << pc << std::endl;
        return;
    }

    const auto el2        = program[pc];
    const auto paramNames = std::get<std::vector<std::string>>(std::get<Value>(el2));
    ++pc; // todo check +1 or +0

    globalFunctions.emplace(name, new FunctionInfo(pc, paramNames));
    ++pc;
}


// var b: int = a;
// var b = abas(1,2,3+1)

// push 1
// push 2
// push 1
// push 3
// add
// call "abas"

void CustomInterpreter::instr_call() {
    const Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_call" << std::endl;
        return;
    }

    if (frame->operandStack.empty()) {
        std::cerr << "Error: operand stack underflow in instr_call" << std::endl;
        return;
    }

    const ValueOrInstr token = program[++pc];
    if (!std::holds_alternative<Value>(token)) {
        std::cerr << "Error: expected value after CALL at pc " << pc << std::endl;
        return;
    }

    const auto value = std::get<Value>(token);
    if (!std::holds_alternative<std::string>(value)) {
        std::cerr << "Error: expected value after CALL at pc " << pc << std::endl;
        return;
    }

    const auto funcName = std::get<std::string>(value);
    if (const auto funcIter = globalFunctions.find(funcName); funcIter != globalFunctions.end()) {
        const auto funcInfo = funcIter->second;

        std::vector<Value> args;
        for (size_t i = 0; i < funcInfo->paramNames.size(); ++i) {
            if (!current_frame()->operandStack.empty()) {
                args.push_back(current_frame()->operandStack.top());
                current_frame()->operandStack.pop();
            }
        }

        returnAddressStack.push(pc + 1);

        push_sibling_frame();

        for (size_t i = 0; i < funcInfo->paramNames.size(); ++i) {
            const auto& name = funcInfo->paramNames[i];
            if (i < args.size()) {
                current_frame()->localVariables[name] = args[i];
            }
        }

        pc = funcInfo->functionStart;
    }
}

// push 1
// ret


void CustomInterpreter::instr_ret() {
    if (frameStack.empty()) {
        std::cerr << "Error: frame stack underflow in instr_ret" << std::endl;
        return;
    }

    const Value funcReturnValue = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    frame_pop_on_return();

    current_frame()->operandStack.emplace(funcReturnValue);

    if (returnAddressStack.empty()) {
        std::cerr << "Error: return address stack underflow in instr_ret" << std::endl;
        return;
    }

    pc = returnAddressStack.top();
    returnAddressStack.pop();
}

void CustomInterpreter::instr_if_eq() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_eq" << std::endl;
        return;
    }

    Value a, b;
    if (!fetch_operands(frame, a, b)) {
        return;
    }

    bool result;
    if (!compare_values(a, b, result, "eq")) {
        return;
    }

    handle_conditional_jump(result);
}

void CustomInterpreter::instr_if_ne() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_ne" << std::endl;
        return;
    }

    Value a, b;
    if (!fetch_operands(frame, a, b)) {
        return;
    }

    bool result;
    if (!compare_values(a, b, result, "ne")) {
        return;
    }

    handle_conditional_jump(result);
}

void CustomInterpreter::instr_if_lt() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_lt" << std::endl;
        return;
    }

    Value a, b;
    if (!fetch_operands(frame, a, b)) {
        return;
    }

    bool result;
    if (!compare_values(a, b, result, "lt")) {
        return;
    }

    handle_conditional_jump(result);
}

void CustomInterpreter::instr_if_gt() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_gt" << std::endl;
        return;
    }

    Value a, b;
    if (!fetch_operands(frame, a, b)) {
        return;
    }

    bool result;
    if (!compare_values(a, b, result, "gt")) {
        return;
    }

    handle_conditional_jump(result);
}

void CustomInterpreter::instr_if_le() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_le" << std::endl;
        return;
    }

    Value a, b;
    if (!fetch_operands(frame, a, b)) {
        return;
    }

    bool result;
    if (!compare_values(a, b, result, "le")) {
        return;
    }

    handle_conditional_jump(result);
}

void CustomInterpreter::instr_if_ge() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_ge" << std::endl;
        return;
    }

    Value a, b;
    if (!fetch_operands(frame, a, b)) {
        return;
    }

    bool result;
    if (!compare_values(a, b, result, "ge")) {
        return;
    }

    handle_conditional_jump(result);
}
void CustomInterpreter::instr_if() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_if_ge" << std::endl;
        return;
    }

    Value a = frame->operandStack.top();
    frame->operandStack.pop();

    const bool result = (std::get<bool>(a) == true);

    handle_conditional_jump(result);
}

bool CustomInterpreter::fetch_operands(Frame* frame, Value& a, Value& b) {
    if (frame->operandStack.size() < 2) {
        std::cerr << "Error: operand stack underflow" << std::endl;
        return false;
    }
    b = frame->operandStack.top();
    frame->operandStack.pop();
    a = frame->operandStack.top();
    frame->operandStack.pop();
    return true;
}

bool CustomInterpreter::compare_values(const Value& a, const Value& b, bool& result, const std::string& op) {
    if (a.index() != b.index()) {
        std::cerr << "Error: type mismatch in " << op << std::endl;
        return false;
    }

    if (std::holds_alternative<int64_t>(a)) {
        const int64_t val_a = std::get<int64_t>(a);
        const int64_t val_b = std::get<int64_t>(b);

        if (op == "eq") {
            result = val_a == val_b;
        } else if (op == "ne") {
            result = val_a != val_b;
        } else if (op == "lt") {
            result = val_a < val_b;
        } else if (op == "gt") {
            result = val_a > val_b;
        } else if (op == "le") {
            result = val_a <= val_b;
        } else if (op == "ge") {
            result = val_a >= val_b;
        }
    } else {
        std::cerr << "Error: unsupported type in " << op << std::endl;
        return false;
    }
    return true;
}

void CustomInterpreter::handle_conditional_jump(const bool condition) {
    const auto arg = program[++pc];
    if (!std::holds_alternative<Value>(arg)) {
        std::cerr << "Error: Expected value at pc " << pc << std::endl;
        return;
    }

    const auto value = std::get<Value>(arg);
    if (!std::holds_alternative<int64_t>(value)) {
        std::cerr << "Error: Expected value at pc " << pc << std::endl;
        return;
    }

    const auto line_number = std::get<int64_t>(value);
    if (line_number <= pc) {
        std::cerr << "Error: Can't go back after if" << std::endl;
    }

    pc = condition ? pc + 1 : line_number;
}
void CustomInterpreter::instr_arr_access() {
    const auto array = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    auto array_vec = std::get<std::vector<int64_t>>(array);

    const auto index = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    const auto arr_ind = std::get<int64_t>(index);

    current_frame()->operandStack.emplace(array_vec[arr_ind]);
}
