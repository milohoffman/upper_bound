#include "upper_bound.h"

size_t bsearch(int* array, size_t size, int x) {
    size_t count = size;
    size_t step;
    int* left = array;

    while (count > 0) {
        step = count / 2;

        int* v = left + step;
        if (x >= *v) {
            left = v + 1;
            count -= step + 1;
        } else {
            count = step;
        }
    }

    return left - array;
}
