#ifndef SEARCH_ALG_H_
#define SEARCH_ALG_H_

#include <stdint.h>

// ============================================================================
// АЛГОРИТМЫ ПОИСКА ДЛЯ МАССИВОВ (ARRAY SEARCH)
// ============================================================================
int bynary_search(int* data, int size, int target);
int search_min_max(int* data, size_t size, char* mode);

#endif // !SEARCH_ALG_H_