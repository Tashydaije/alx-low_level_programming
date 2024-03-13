#ifndef __SEARCH_ALGOS_H
#define __SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int _binary_search(int *array, int low, int high, int value);
int exponential_search(int *array, size_t size, int value);
#endif /* __SEARCH_ALGOS_H */
