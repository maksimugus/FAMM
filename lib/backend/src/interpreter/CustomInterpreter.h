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
    PUSH, // push next word,
    FRAME_APPEND
};

using Value = std::variant<int64_t, bool, float, std::vector<int64_t>, void*>;

struct Frame {
    std::map<std::string, Value> localVariables;
};

class CustomInterpreter {
    std::stack<Frame> stack;
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
    void instr_print();
    void instr_load();
    void instr_store();
    void instr_goto();
    void instr_push();
};
