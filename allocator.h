// Daniel Domingos (Github: ddomingos1006)
// Outlines and provides the API for a simple dynamic memory allocator
// using a doubly linked explicit free list 

#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#define INITIAL_SIZE 1024 * 1024
#define ALIGNMENT 8

// initialize the allocator and an initially free array of INITIAL_SIZE bytes 
void init_allocator(void);

// allocate size bytes on the heap, returning a pointer to the allocated block
void* d_malloc(size_t size);

// free memory previously d_malloc-ed at the address ptr, 
// undefined behavior for freeing non d_malloced memory
void d_free(void* ptr);

// reallocate a block of d_malloced-ed memory at the address ptr to the new size,
// undefined behavior for attempting to realloc non d_malloced memory
void* d_realloc(void* ptr, size_t new_size);

/* Debug / test helper */
void print_memory_state(void);

#endif /* ALLOCATOR_H */