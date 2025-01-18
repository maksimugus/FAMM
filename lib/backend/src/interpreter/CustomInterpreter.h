#pragma once

#include <cstdint>
#include <iostream>
#include <map>
#include <stack>
#include <variant>
#include <vector>

enum Instr {
    NOP, // do nothing
    ADD, // pop a, pop b, push a + b
    SUB, // pop a, pop b, push a - b
    AND, // pop a, pop b, push a & b
    OR, // pop a, pop b, push a | b
    NOT, // pop a, push !a
    PRINT, // pop one byte and write to stream
    LOAD, // pop a, push byte read from address a
    STORE, // pop a, pop b, write b to address a
    GOTO, // pop a, goto a
    PUSH, // push next word

    FRAME_APPEND, // write new frame
    FRAME_POP, // pop frame

    CALL, // push address, push arguments, create frame, goto address
    RET, // pop frame, restore pc

    IF_EQ, // pop a, pop b, create frame, if (a == b) goto next
    IF_NE, // pop a, pop b, create frame, if (a != b) goto next
    IF_LT, // pop a, pop b, create frame, if (a < b) goto next
    IF_GT, // pop a, pop b, create frame, if (a > b) goto next
    IF_LE, // pop a, pop b, create frame, if (a <= b) goto next
    IF_GE, // pop a, pop b, create frame, if (a >= b) goto next
};

using Value = std::variant<int64_t, bool, float, std::vector<int64_t>, void*>;

using ValueOrInstr = std::variant<Instr, Value>;

struct Frame {
    std::map<std::string, Value> localVariables; // Локальные переменные
    std::stack<Value> operandStack; // Стек операндов
    Frame* parentFrame; // Указатель на родительский фрейм
};

class CustomInterpreter {
    std::stack<Frame*> frameStack; // Стек фреймов
    std::vector<ValueOrInstr> program; // Программа
    size_t pc; // Счетчик команд
    std::stack<size_t> returnAddressStack; // стек адресов возврата

public:
    explicit CustomInterpreter(const std::vector<ValueOrInstr>& prog) : program(prog), pc(0) {
        // Создаем начальный фрейм
        frameStack.push(new Frame{{}, {}, nullptr});
    }
    ~CustomInterpreter() {
        while (!frameStack.empty()) {
            delete frameStack.top();
            frameStack.pop();
        }
    }

    void run();

private:
    void frame_push();
    void frame_pop();
    Frame* current_frame();

    void instr_add();
    void instr_sub();
    void instr_and();
    void instr_or();
    void instr_not();
    void instr_print();
    void instr_load();
    void instr_store();
    void instr_goto();
    void instr_push();
    void instr_frame_append();
    void instr_frame_pop();

    // Условные переходы
    void instr_if_eq();
    void instr_call();
    void instr_ret();
    void instr_if_ne();
    void instr_if_lt();
    void instr_if_gt();
    void instr_if_le();
    void instr_if_ge();
};
