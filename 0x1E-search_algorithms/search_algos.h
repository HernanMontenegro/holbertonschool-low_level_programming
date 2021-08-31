#ifndef SEARCH_ALGOS_H

#define SEARCH_ALGOS_H

/* Libraries */
#include <stdio.h>

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array_from_to(int *array, int from, int to);

#endif /* SEARCH_ALGOS_H */
