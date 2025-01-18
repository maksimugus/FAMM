
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

void CustomInterpreter::instr_load() {
    const Value address_value = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    if (std::holds_alternative<std::string>(address_value)) {
        const auto address = std::get<std::string>(address_value);

        Frame* frame = current_frame();
        while (frame != nullptr) {
            if (auto it = frame->localVariables.find(address); it != frame->localVariables.end()) {
                current_frame()->operandStack.push(it->second);
                return;
            }
            frame = frame->parentFrame; // Move to the parent frame if not found
        }

        std::cerr << "Error: Address '" << address << "' not found in any frame!" << std::endl;
        return;
    }

    std::cerr << "Error: Expected string address in instr_load!" << std::endl;
}

void CustomInterpreter::instr_store() {
    const Value value_to_store = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    const Value address_value = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    if (std::holds_alternative<std::string>(address_value)) {
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
        return;
    }

    std::cerr << "Error: Expected string address in instr_store!" << std::endl;
}

void CustomInterpreter::instr_goto() {
    const Value address_value = current_frame()->operandStack.top();
    current_frame()->operandStack.pop();

    // TODO check
    if (std::holds_alternative<int64_t>(address_value)) {
        pc = std::get<int64_t>(address_value);
    } else {
        std::cerr << "Error: Expected an integer address in instr_goto!" << std::endl;
    }
}

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

void CustomInterpreter::instr_call() {
    Frame* frame = current_frame();
    if (frame == nullptr) {
        std::cerr << "Error: no current frame in instr_call" << std::endl;
        return;
    }

    if (frame->operandStack.empty()) {
        std::cerr << "Error: operand stack underflow in instr_call" << std::endl;
        return;
    }

    const Value addrVal = frame->operandStack.top();
    frame->operandStack.pop();

    if (!std::holds_alternative<int64_t>(addrVal)) {
        std::cerr << "Error: invalid address type in instr_call" << std::endl;
        return;
    }

    const int64_t addr = std::get<int64_t>(addrVal);

    if (addr < 0 || addr >= static_cast<int64_t>(program.size())) {
        std::cerr << "Error: invalid program address in instr_call" << std::endl;
        return;
    }

    returnAddressStack.push(pc + 1);

    push_sibling_frame(); // create new frame

    pc = addr;
}

void CustomInterpreter::instr_ret() {
    if (frameStack.empty()) {
        std::cerr << "Error: frame stack underflow in instr_ret" << std::endl;
        return;
    }

    frame_pop();

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
        std::cerr << "Error: expected Value in line " + pc << std::endl;
        return;
    }

    const auto value = std::get<Value>(arg);
    if (!std::holds_alternative<int64_t>(value)) {
        std::cerr << "Error: expected Value in line " + pc << std::endl;
        return;
    }

    const auto line_number = std::get<int64_t>(value);
    if (line_number <= pc) {
        std::cerr << "Error: can't go back after if" << std::endl;
    }

    pc = condition ? pc + 1 : line_number;
}
