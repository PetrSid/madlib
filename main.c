#include "include/alg/search.h"
#include "include/alg/sort.h"

#include "include/data/dyn_arr.h"


void run_tests() {
    struct dyn_arr* darr = darr_init(10);

    darr_set(darr, 0, 5);
    darr_set(darr, 1, 6);
    darr_set(darr, 3, 6);

    darr_remv(&darr);
    // Test OK


    int new_arr[5] = {1, 2, 3, 5, 6};

    buble_sort(new_arr, 5);
    bynary_search(new_arr, 5, 2);
    search_min_max(new_arr, 5, "x");
}


int main()
{
    run_tests();
    
    //darr_remv(&arr);
    return 0;
    // gcc -std=c11 -g -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion ../src/main.c ../src/dyn_arr.c -o dyn
    // gcc ../src/main.c ../src/dyn_arr.c -o dyn
}