//
// Created by polyakov.mihail on 13.01.2025.
//
#include "gc.h"

#include <iostream>

void CustomGC::mark(void* ptr) {
    if (!ptr) {
        return;
    }

    const auto it = allocatedObjects.find(ptr);
    if (it == allocatedObjects.end() || it->second.marked) {
        return;
    }

    it->second.marked = true;
    for (void* ref : it->second.references) {
        mark(ref);
    }
}
void CustomGC::removeRoot(void* ptr) {
    auto& instance = getInstance();
    if (const auto it = std::ranges::find(instance.roots, ptr); it != instance.roots.end()) {
        instance.roots.erase(it);
    }
}
void CustomGC::addRoot(void* ptr) {
    if (ptr) {
        std::cout << "abas" << std::endl;
        getInstance().roots.push_back(ptr);
    }
}
static int a = 0;
void* CustomGC::allocateMemory(const size_t size) {
    if (++a % 5 == 0) getInstance().collect();
    void* ptr = std::malloc(size);
    if (ptr) {
        getInstance().allocatedObjects[ptr] = GCNode{ptr, size, false, {}};
        std::cout << "abas" << std::endl;
    }
    return ptr;
}

void CustomGC::sweep() {
    for (auto it = allocatedObjects.begin(); it != allocatedObjects.end();) {
        if (!it->second.marked) {
            std::cout << "freed\n";
            std::free(it->second.ptr);
            it = allocatedObjects.erase(it);
        } else {
            it->second.marked = false;
            ++it;
        }
    }
}
void CustomGC::collect() {
    std::cout << allocatedObjects.size() << " " << roots.size() << std::endl;
    for (void* root : roots) {
        mark(root);
    }
    sweep();
}

CustomGC& CustomGC::getInstance() {
    static CustomGC instance;
    return instance;
}
