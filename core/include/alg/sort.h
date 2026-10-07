#ifndef SORT_ALG_H_
#define SORT_ALG_H_

#include "../mad_config.h"

#include <stdint.h>

// ============================================================================
// АЛГОРИТМЫ СОРТИРОВКИ ДЛЯ МАССИВОВ (ARRAY SORTING)
// ============================================================================
void buble_sort(int* data, size_t size);
void selection_sort(int* data, size_t size);
void insertion_sort(int* data, size_t size);

#endif //!SORT_ALG_H_