#include "CustomInterpreter.h"
void CustomInterpreter::run() {
    while (pc < program.size()) {
        switch (program[pc]) {
        case NOP:
            // Do nothing
            break;
        case ADD:
            {
                auto b = stack.top().get<int>();
                stack.pop();
                int a = stack.top();
                stack.pop();
                stack.push(a + b);
                break;
            }
        case SUB:
            {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                stack.push(a - b);
                break;
            }
        case AND:
            {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                stack.push(a & b);
                break;
            }
        case OR:
            {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                stack.push(a | b);
                break;
            }
        case NOT:
            {
                int a = stack.top();
                stack.pop();
                stack.push(~a);
                break;
            }
        case OUT:
            {
                int a = stack.top();
                stack.pop();
                std::cout << static_cast<char>(a);
                break;
            }
        case LOAD:
            {
                int a = stack.top();
                stack.pop();
                stack.push(memory[a]);
                break;
            }
        case STOR:
            {
                int b = stack.top();
                stack.pop();
                int a = stack.top();
                stack.pop();
                memory[a] = b;
                break;
            }
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
        case POP:
            stack.pop();
            break;
        default:
            std::cerr << "Unknown instruction" << std::endl;
            break;
        }
        ++pc;
    }
}
void CustomInterpreter::instr_add() {}
void CustomInterpreter::instr_sub() {}
void CustomInterpreter::instr_and() {}
void CustomInterpreter::instr_or() {}
void CustomInterpreter::instr_not() {}
void CustomInterpreter::instr_out() {}
void CustomInterpreter::instr_load() {}
void CustomInterpreter::instr_stor() {}
void CustomInterpreter::instr_goto() {}
void CustomInterpreter::instr_push() {}
void CustomInterpreter::instr_pop() {}
