#pragma once

#include <cstdint>
#include <iostream>
#include <stack>
#include <variant>
#include <vector>

using Value = std::variant<int64_t, bool, float, std::vector<int64_t>, void*>;

enum Instr {
    NOP, // do nothing
    ADD, // pop a, pop b, push a + b
    SUB, // pop a, pop b, push a - b
    AND, // pop a, pop b, push a & b
    OR, // pop a, pop b, push a | b
    NOT, // pop a, push !a
    OUT, // pop one byte and write to stream
    LOAD, // pop a, push byte read from address a
    STOR, // pop a, pop b, write b to address a
    GOTO, // pop a, goto a
    PUSH, // push next word
    POP, // remove top of stack
};

class CustomInterpreter {

    std::stack<Value> stack;
    std::vector<Instr> program;
    size_t pc;

public:
    explicit CustomInterpreter(const std::vector<Instr>& prog) : program(prog), pc(0) {}
    void run();

private:
    void instr_add();
    void instr_sub();
    void instr_and();
    void instr_or();
    void instr_not();
    void instr_out();
    void instr_load();
    void instr_stor();
    void instr_goto();
    void instr_push();
    void instr_pop();
};
