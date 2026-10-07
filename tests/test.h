#ifndef TEST_H_
#define TEST_H_

// ============================================================================ //
// ТЕСТИРОВАНИЕ СТРУКТУР ДАННЫХ DATA                                            //
// ============================================================================ //
void rt_darr();



// ============================================================================ //
// ТЕСТИРОВАНИЕ АЛГОРИТМОВ                                                      //
// ============================================================================ //
void rt_search();
void rt_sort();



void run_tests_main();







// // Test OK
//     const int size = 10;
//     int new_arr[size];
//     srand(time(NULL));
//     int idx_tests = 0;
//     while(idx_tests < 100)
//     {
//         for (size_t i = 0; i < size; i++) {
//             int random = rand() % 100;
//             new_arr[i] = random;
//         } insertion_sort(new_arr, size);
//         for (size_t i = 1; i < size; i++) 
//         {
//             assert(new_arr[i - 1] <= new_arr[i]);
//         }
//         idx_tests++;
//         printf("[TEST NUMBER: %d is Passed]\n", idx_tests);
//     }

#endif //!TEST_H_