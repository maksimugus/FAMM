#pragma once

#include <cstdint>
#include <iostream>
#include <stack>
#include <vector>

enum Instruction { PUSH_INT, ADD, SUB, MUL, DIV, PRINT, HALT };

class CustomInterpreter {
    struct Value {
        enum TYPE { INT64, ARRAY, PTR } type;
        union {
            int64_t intValue;
            std::vector<int64_t>* arrayValue;
            void* ptrValue;
        };
        Value() : type(INT64), intValue(0) {}
        explicit Value(const int64_t v) : type(INT64), intValue(v) {}
        explicit Value(std::vector<int64_t>* v) : type(ARRAY), arrayValue(v) {}
        explicit Value(void* p) : type(PTR), ptrValue(p) {}
    };

    std::stack<Value> stack;

    std::vector<Instruction> program;
    size_t pc; // Program counter

public:
    explicit CustomInterpreter(const std::vector<Instruction>& prog) : program(prog), pc(0) {}

    void run() {
        while (pc < program.size()) {
            switch (program[pc]) {
            case PUSH_INT:
                {
                    auto value = static_cast<int64_t>(program[++pc]);
                    stack.emplace(value);
                    break;
                }
            case ADD:
                {
                    auto b = stack.top();
                    stack.pop();
                    auto a = stack.top();
                    stack.pop();
                    stack.emplace(a.intValue + b.intValue);
                    break;
                }
            case SUB:
                {
                    auto b = stack.top();
                    stack.pop();
                    auto a = stack.top();
                    stack.pop();
                    stack.emplace(a.intValue - b.intValue);
                    break;
                }
            case MUL:
                {
                    auto b = stack.top();
                    stack.pop();
                    auto a = stack.top();
                    stack.pop();
                    stack.emplace(a.intValue * b.intValue);
                    break;
                }
            case DIV:
                {
                    auto b = stack.top();
                    stack.pop();
                    auto a = stack.top();
                    stack.pop();
                    stack.emplace(a.intValue / b.intValue);
                    break;
                }
            case PRINT:
                {
                    auto a = stack.top();
                    stack.pop();
                    std::cout << a.intValue << std::endl;
                    break;
                }
            case HALT:
                return;
            }
            ++pc;
        }
    }
};

// int main() {
//     const std::vector program = {
//         PUSH_INT, static_cast<Instruction>(10), PUSH_INT, static_cast<Instruction>(20), ADD, PRINT, HALT};
//
//     CustomInterpreter interpreter(program);
//     interpreter.run();
//
//     return 0;
// }
