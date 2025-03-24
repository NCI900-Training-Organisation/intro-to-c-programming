#ifndef MY_MALLOC_H
#define MY_MALLOC_H

#include <stddef.h>

void *my_malloc(size_t size);
void my_free(void *ptr);
void *my_realloc(void *ptr, size_t size);
void *my_calloc(size_t nelem, size_t elsize);

#endif // MY_MALLOC_Hx