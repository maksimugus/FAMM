#pragma once
#include <cstdlib>
#include <iostream>
#include <unordered_set>

class CustomGC {
    std::unordered_set<void*> allocations;

public:
    void* alloc(const size_t size) {
        void* ptr = std::malloc(size);
        if (!ptr) {
            throw std::bad_alloc();
        }
        allocations.insert(ptr);
        return ptr;
    }

    void collect(void* ptr) {
        if (allocations.contains(ptr)) {
            std::free(ptr);
            allocations.erase(ptr);
        } else {
            std::cerr << "Pointer not found in GC pool.\n";
        }
    }

    ~CustomGC() {
        for (void* ptr : allocations) {
            std::free(ptr);
        }
        allocations.clear();
    }
};


inline CustomGC gc;

extern "C" {
inline void* gc_alloc(const size_t size) {
    return gc.alloc(size);
}

inline void gc_collect(void* ptr) {
    gc.collect(ptr);
}
}
