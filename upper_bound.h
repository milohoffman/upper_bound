#pragma once

#include <stddef.h>

// returns the index of the first element greater than x
// if all of elements in the array are less or equal than x returns size
// if all of elements in the array are greater than x returns 0
size_t bsearch(int* array, size_t size, int x);
