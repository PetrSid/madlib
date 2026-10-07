#include "test.h"

#include "data.h"
#include "algorithms.h"

#include <assert.h>

// ============================================================================ //
// ТЕСТИРОВАНИЕ СТРУКТУР ДАННЫХ DATA                                            //
// ============================================================================ //
void rt_darr()
{
    // INITIAL DYN_ARRAY
    struct dyn_arr* test_arr = darr_init(10);

    // TESTS METHODES

    // LENGTH
    assert(darr_capacity(test_arr) == 10);
    darr_resize(test_arr, 15);








    assert(darr_size(test_arr) == 15);
    assert(darr_capacity(test_arr) == 15);
    darr_resize(test_arr, 25);
    assert(darr_capacity(test_arr) == 25);
    darr_resize(test_arr, 10);
    assert(darr_capacity(test_arr) == 10);





    darr_capacity(test_arr) == 10;
    // darr_clear();
    // darr_get();
    // darr_push_back();
    // darr_push_front();
    // darr_set();
    // darr_size();
    // TESTS METHODES

    // REMOVE DYN_ARRAY
    darr_remv(&test_arr);
}



// ============================================================================ //
// ТЕСТИРОВАНИЕ АЛГОРИТМОВ                                                      //
// ============================================================================ //
void rt_search() 
{
}


void rt_sort()
{

}



void run_tests_main()
{

}