#include "CustomInterpreter.h"
void CustomInterpreter::run() {
    while (pc < program.size()) {
        switch (program[pc]) {
        case NOP:
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
                auto a = stack.top();
                stack.pop();
                stack.push(memory[a]);
        case STORE:
                std::string b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                memory[a] = b;
                break;
        case GOTO:
            {
                int a = stack.top();
                stack.pop();
                // Implement jump logic here
                break;
            }
        case PUSH:
            // Implement push logic here
            break;
        default:
            std::cerr << "Unknown instruction" << std::endl;
            break;
        }
        ++pc;
    }
}

void CustomInterpreter::instr_add() {
    auto b = std::get<int64_t>(stack.top());
    stack.pop();
    auto a = std::get<int64_t>(stack.top());
    stack.pop();
    stack.emplace(a + b);
}

void CustomInterpreter::instr_sub() {
    auto b = std::get<int64_t>(stack.top());
    stack.pop();
    auto a = std::get<int64_t>(stack.top());
    stack.pop();
    stack.emplace(a - b);
}

void CustomInterpreter::instr_and() {
    auto b = std::get<bool>(stack.top());
    stack.pop();
    auto a = std::get<bool>(stack.top());
    stack.pop();
    stack.emplace(a && b);
}

void CustomInterpreter::instr_or() {
    auto b = std::get<bool>(stack.top());
    stack.pop();
    auto a = std::get<bool>(stack.top());
    stack.pop();
    stack.emplace(a || b);
}

void CustomInterpreter::instr_not() {
    auto a = std::get<bool>(stack.top());
    stack.pop();
    stack.emplace(~a);
}

void CustomInterpreter::instr_print() {

}

void CustomInterpreter::instr_load() {

}

void CustomInterpreter::instr_store() {

}

void CustomInterpreter::instr_goto() {

}

void CustomInterpreter::instr_push() {

}
