#include "alg/sort.h"

#include <stdbool.h>


// ============================================================================
// АЛГОРИТМЫ СОРТИРОВКИ ДЛЯ МАССИВОВ (ARRAY SORT)
// ============================================================================
void buble_sort(int* data, size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        bool swaped = false;
        for (size_t j = i + 1; j < size; j++)
        {
            if(data[i] > data[j])
            {
                swaped = true;

                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
        if(swaped == 0) { break; }
    } 
}

void selection_sort(int* data, size_t size)
{
    if (data == NULL || size == 0) { return; } // if size == 0 then ERROR

    for (size_t left = 0; left < size - 1; left++)
    {
        int min_idx = left;
        for (size_t j = left + 1; j < size; j++)
        {
            // find min element in data
            if(data[min_idx] > data[j])  { min_idx = j; } 
        }
        if (min_idx != left)
        {
            // Swap elements, their left side
            int temp      = data[left];
            data[left]    = data[min_idx];
            data[min_idx] = temp;
        }
    }
}

void insertion_sort(int* data, size_t size)
{
    // Пока массив не остортирован
    for (int i = 1; i < size; i++)
    {
        int tmp = data[i]; // выбор индекса элеманта
        int save_pos = i;

        // цыкл пока не достигним начала
        for (int j = i - 1; j >= 0; j--)
        {
            // 	Выбраный элемент меньше
            if(tmp < data[j]){
                data[j + 1] = data[j];  // 	если да продолжить и Сдвигаем элемент
                save_pos--;
            }
            // 	если нет сохраняем позицию 
        }
        data[save_pos] = tmp; // Устанавливаем на сохранёную позицию выбраный элемент
    }
}