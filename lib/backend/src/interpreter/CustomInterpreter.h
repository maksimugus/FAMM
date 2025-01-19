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
    MUL, // pop a, pop b, push a * b
    DIV, // pop a, pop b, push a / b    // floor div
    MOD, // pop a, pop b, push a % b

    PRINT, // pop a (any) and cout

    LOAD, // next word a (string), push from a
    STORE, // next word a (string), pop b, write b to a
    GOTO, // next word a (int), goto a
    PUSH, // push next word (any)

    FRAME_PUSH, // write new frame
    FRAME_POP, // pop frame

    DECL_FUNC, // next word name (string), next word paramNames (vector<string>), next word funcEnd
    CALL, // next word name (string), pop arguments, create frame, goto name
    RET, // pop returnValue, pop frame, restore pc

    EQ, // pop a, pop b, push (a == b)
    NE, // pop a, pop b, push (a != b)
    LT, // pop a, pop b, push (a < b)
    GT, // pop a, pop b, push (a > b)
    LE, // pop a, pop b, push (a <= b)
    GE, // pop a, pop b, push (a >= b)

    IF, // pop a, create frame, if a == true goto next

    ARR_LOAD_ELEM, // pop arr, pop ind,  push element
    ARR_STORE_ELEM, // pop arr, pop ind, pop value, arr[i] = value
};


using Value =
    std::variant<std::string, int64_t, bool, std::vector<int64_t>, std::vector<std::string>, std::vector<bool>>; // todo add vector bool

using ValueOrInstr = std::variant<Instr, Value>;

struct Frame {
    std::map<std::string, Value> localVariables = {}; // Локальные переменные
    std::stack<Value> operandStack              = {}; // Стек операндов
    Frame* parentFrame                          = nullptr; // Указатель на родительский фрейм
    explicit Frame(Frame* parent = nullptr) : parentFrame(parent) {}
};

struct FunctionInfo {
    size_t functionStart;
    std::vector<std::string> paramNames;
    FunctionInfo(const size_t functionStart, const std::vector<std::string>& paramNames)
        : functionStart(functionStart), paramNames(paramNames) {}
};

class CustomInterpreter {
    std::stack<Frame*> frameStack{}; // Стек фреймов
    std::vector<ValueOrInstr> program; // Программа
    size_t pc; // Счетчик команд
    std::stack<size_t> returnAddressStack; // стек адресов возврата
    std::map<std::string, FunctionInfo*> globalFunctions;

public:
    explicit CustomInterpreter(const std::vector<ValueOrInstr>& prog) : program(prog), pc(0) {
        // Создаем начальный фрейм
        frameStack.push(new Frame(nullptr));
    }
    ~CustomInterpreter() {
        while (!frameStack.empty()) {
            delete frameStack.top();
            frameStack.pop();
        }
    }



    void run();

private:
    void push_sibling_frame(); // recurrent functions
    void push_child_frame(); // while, for, if
    void frame_pop();
    void frame_pop_on_return();
    Frame* current_frame();

    void instr_add();
    void instr_sub();
    void instr_and();
    void instr_or();
    void instr_not();
    void instr_mul();
    void instr_div();
    void instr_mod();

    void instr_print();
    void instr_load();
    void instr_store();
    void instr_goto();
    void instr_push();
    void instr_frame_push();
    void instr_frame_pop();
    void instr_decl_func();

    // Условные переходы
    void instr_call();
    void instr_ret();
    void instr_eq();
    void instr_ne();
    void instr_lt();
    void instr_gt();
    void instr_le();
    void instr_ge();
    void instr_if();
    static bool fetch_operands(Frame* frame, Value& a, Value& b);
    static bool compare_values(const Value& a, const Value& b, bool& result, const std::string& op);
    void handle_conditional_jump(bool condition);

    void instr_arr_load_elem();
    void instr_arr_store_elem();
};
