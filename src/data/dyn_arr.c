#include "data/dyn_arr.h"

#include <stdio.h>
#include <stdlib.h>

size_t   darr_capacity(const struct dyn_arr* darr) { return (darr == NULL)? 0 : darr->capacity; }
size_t   darr_size(const struct dyn_arr* darr)     { return (darr == NULL)? 0 : darr->size;     }


struct dyn_arr* darr_init(const size_t count)
{
    if(count >= LIMITED) {
        LOG_ERR("Array size exceeds maximum limit");
        return NULL;
    }
    struct dyn_arr* arr = (struct dyn_arr*)malloc(sizeof(struct dyn_arr));
    if(!arr) {
        LOG_ERR("Fatal error: Failed to allocate memory for structure");
        return NULL;
    }
    arr->data = (int*)calloc(count, sizeof(int));
    if(!arr->data) {
        LOG_ERR("Fatal error: Failed to allocate memory for data buffer");
        free(arr);
        return NULL;
    }
    arr->capacity  = count;
    arr->size      = count;

    return arr;
}

int darr_remv(struct dyn_arr** darr) 
{
    if(darr && is_darr(*darr) && (*darr)->data) {
        free((*darr)->data);
        free(*darr);
        *darr          = NULL;

        return SUCCESS;
    } return -1;
}

static bool darr_realloc(struct dyn_arr* darr, const size_t capacity)
{
    int* tmp = (int*)realloc(darr->data, capacity * sizeof(int));
    if(!tmp) {
        fprintf(stderr, "Error: Invalid resize parameters.\n");
        return false;
    }

    darr->data = tmp;
    darr->capacity  = capacity;

    return true;
}

int darr_resize(struct dyn_arr* darr, const size_t _newSize)
{
    if(!is_darr(darr) || _newSize > LIMITED)
    {
        fprintf(stderr, "error:\n");
        return ERR_NULL;
    }
    if(_newSize == darr->size) { 
        return SUCCESS;
    }
    if(_newSize > darr->capacity) 
    {
        if(!darr_realloc(darr, _newSize))  
        {
            fprintf(stderr, "error:\n");
            return ERR_NULL;
        }
    }
    darr->size     = _newSize;

    return SUCCESS;
}

int darr_clear(struct dyn_arr* darr)
{
    if(is_empty(darr)){
        fprintf(stderr, "Warning: Attempt to clear an empty or invalid array.\n");
        return ERR_NULL;
    }
    for (size_t i = 0; i < darr->size; i++) {
        darr->data[i] = 0;
    }
    darr->size = 0;
    return SUCCESS;
}


int darr_set(struct dyn_arr* darr, const size_t index, const int value)
{
    if(is_invalid_index(darr, index)) 
    { 
        fprintf(stderr, "Error: Index %zu is out of bounds.\n", index);
        return ERR_NULL;
    } 
    darr->data[index] = value;
    return SUCCESS;
}

int darr_get(const struct dyn_arr* darr, const size_t index)
{
    if(is_invalid_index(darr, index))
    { 
        fprintf(stderr, "Error: Index %zu is out of bounds.\n", index);
        return ERR_NULL;
    } 
    return darr->data[index];
}


int darr_push_front(struct dyn_arr* darr, const int value)
{
    if(!is_darr(darr)){
        perror("error:\n");
        return ERR_NULL;
    }
    if(is_full(darr))
    {
        if(!darr_realloc(darr, darr->capacity * GROWTH_FACTOR)) 
        {
            printf("error:\n");
            return ERR_NULL;
        }   
    }
    size_t i = darr->size - 1;
    while (i != 0)
    {
        darr->data[i + 1] = darr->data[i];
        i--;
    }
    darr->data[0] = value;
    darr->size += 1;

    return SUCCESS;
}

int darr_push_back(struct dyn_arr* darr, const int value)
{
    if(!is_darr(darr))
    {
        fprintf(stderr, "Error: Array pointer is NULL.\n");
        return ERR_NULL;
    }
    if(is_full(darr))
    {
        if(!darr_realloc(darr, darr->capacity * GROWTH_FACTOR)) {
            return ERR_NULL;
        }
    }
    darr->data[darr->size] = value;
    darr->size += 1;

    return SUCCESS;
}