// #include "test.h"

#include "data.h"


int run_test()
{
    // struct dyn_arr* darr = darr_init(10);

    // if(!darr) { return -1; }

    // darr_remv(&darr);


    struct linked_list* list = list_init(10);
    if(!list) { return -1; }

    // list_push_back(list, 5);

    list_remv(&list);

    return 0;
}


int main()
{
    int err = run_test();
    if(err == -1)
    {
        return -1;
    }


    // run_tests_main();
    return 0;
    // gcc -g -O0 main.c -o alg
    // gcc -std=c11 -g -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion ../src/main.c ../src/dyn_arr.c -o dyn
    // gcc ../src/main.c ../src/dyn_arr.c -o dyn
}