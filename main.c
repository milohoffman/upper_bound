#include <stdio.h>

#include "upper_bound.h"

#define STATIC_ARRAY_SIZE(x) sizeof(x) / sizeof(x[0])

void print_result(int x, size_t upper_bound, size_t array_size) {
    if (upper_bound == 0) {
        printf("all of the elements are greater than %d\n", x);
    } else if (upper_bound == array_size) {
        printf("all of the elements are less or equal than %d\n", x);
    } else {
        printf("the first element greater than %d is at position %zu\n", x, upper_bound);
    }
}

int main()
{
    int array[] = {1,2,3,4,5,6,7,8};
    size_t size = STATIC_ARRAY_SIZE(array);

    int x = 5;
    print_result(x, bsearch(array, size, x), size);

    x = 8;
    print_result(x, bsearch(array, size, x), size);

    x = 0;
    print_result(x, bsearch(array, size, x), size);

    return 0;
}
