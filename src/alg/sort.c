#include "alg/sort.h"

#include <stdbool.h>


// ============================================================================
// АЛГОРИТМЫ СОРТИРОВКИ ДЛЯ МАССИВОВ (ARRAY SORT)
// ============================================================================
void buble_sort(int* data, size_t size)
{

    if (data == NULL || size == 0) { return; } // if size == 0 then ERROR

    int right_bound   = size - 1;
    int last_swap_idx = 0;
    bool is_sort      = false;

    int i = 0;
    while (!is_sort) {
        if (i >= right_bound)
        {
            right_bound--;
            if(right_bound <= 0 || last_swap_idx >= right_bound){
                is_sort = true;
                continue;
            }
            i             = 0;
            last_swap_idx = 0;
        }        
        if(data[i] > data[i + 1])
        {
            // SWAP
            int tmp = data[i + 1];
            data[i + 1] = data[i];
            data[i] = tmp;

            last_swap_idx = i - 1; // левая часть не затрагивая i точно очищена
        }
        else{
            last_swap_idx++;
        }
        i++;
    }
}