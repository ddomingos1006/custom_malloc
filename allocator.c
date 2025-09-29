// Daniel Domingos (Github: ddomingos1006)
// Provides the implementation of the dynamic memory allocator using 
// a doubly linked explicit free list

#include <windows.h>
#include <unistd.h>
#include <stddef.h>

#include "allocator.h"

block init_allocator (size_t init_size) {
    void* ptr = VirtualAlloc
        (NULL, init_size, 
        MEM_COMMIT | MEM_RESERVE,
        PAGE_READWRITE);
    block initial_block;
    initial_block.beginning = ptr; 
    initial_block.size = init_size;
    return initial_block;
}

void* d_malloc(size_t size) {

}

void d_free(void* ptr) {

}