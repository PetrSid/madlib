#include "alg/search.h"

// ============================================================================
// АЛГОРИТМЫ ПОИСКА ДЛЯ МАССИВОВ (ARRAY SEARCH)
// ============================================================================
int bynary_search(int* data, int size, int target){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int med = left + (right - left) / 2;
        if(data[med] == target) { return med; }
        if(data[med] > target) {right = med - 1; }
        else { left = med + 1; }
    }
    return -1;
}

int search_min_max(int* data, size_t size, char* mode) // function search_min_max(data, size, mode):
{
    if (size == 0) { return -1; } // if size == 0 then ERROR
    int resuilt = data[0];
    if (mode[0] == 'x' || mode[0] == 'X') // if mode == "max" than
    {
		for (int i = 1; i < size; i++)
		{
            if (data[i] > resuilt) {
				resuilt = data[i];
			}
        }
    }
    else if (mode[0] == 'n' || mode[0] == 'N') // if mode == "min" than
    {
		for (int i = 1; i < size; i++)
		{
            if (data[i] < resuilt){
				resuilt = data[i];
			}
        }
    }
    else
        return -1; // ERROR mode is not caractly
    return resuilt;
}