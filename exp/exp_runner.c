#include "exp.h"

#include <stdbool.h>

// void selection_sort_experimental(int* data, size_t size)
// {
//     if (data == NULL || size == 0) { return; } // if size == 0 then ERROR
    
//     int left  = 0;
//     int right = (int)size - 1;

//     // vars to find min element in data
//     int idx     = 0;
//     int min_idx = 1;

//     bool is_sort = false;
//     // while data is not sorted
//     while(!is_sort)
//     {
//         if (left >= right) {is_sort = true; continue;}

//         // find min element in data
//         if(data[min_idx] > data[idx]) { min_idx = idx; }

//         if(idx >= right)
//         {
//             // Swap elements, their left side
//             int temp      = data[left];
//             data[left]    = data[min_idx];
//             data[min_idx] = temp;
            
//             // updata all vars index
//             left++;     // updata left site
            
//             idx     = left - 1;
//             min_idx = left;
//         }

//         idx++;
//     }
// }

// void buble_sort_experimental(int* data, size_t size)
// {
//     if (data == NULL || size == 0) { return; } // if size == 0 then ERROR

//     int right_bound   = size - 1;
//     int last_sp_idx   = 0; // last_sp_idx


//     bool is_sort      = false;

//     int idx = 0;
//     while (!is_sort) 
//     {
//         if (idx >= right_bound)
//         {
//             right_bound--;
//             if(right_bound <= 0 || last_sp_idx >= right_bound){
//                 is_sort = true;
//                 continue;
//             }

//             last_sp_idx = 0;
//             idx         = 0;
//         }        
//         if(data[idx] > data[idx + 1])
//         {
//             // SWAP
//             int tmp = data[idx + 1];
//             data[idx + 1] = data[idx];
//             data[idx] = tmp;

//             last_sp_idx = idx - 1; // левая часть не затрагивая i точно очищена
//         }
//         else
//         {
//             last_sp_idx++;
//         }
//         idx++;
//     }
// }