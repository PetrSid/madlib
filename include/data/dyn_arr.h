#ifndef DYN_ARR_H
#define DYN_ARR_H

#include <stdint.h>
#include <stdbool.h>

#include "mad_config.h"

#define GROWTH_FACTOR 2


struct dyn_arr
{
    int* data;       // ptr to start in memory area

    size_t capacity; // actual size in array
    size_t size;     // size in array
};

/*Test_Name*/ 
struct dyn_arr* darr_init(const size_t count);
int             darr_remv(struct dyn_arr** darr);

size_t          darr_capacity(const struct dyn_arr* darr);
size_t          darr_size(const struct dyn_arr* darr);

int             darr_resize(struct dyn_arr* darr, const size_t _newSize);
int             darr_clear(struct dyn_arr* darr);
int             darr_set(struct dyn_arr* darr, const size_t index, const int value);
int             darr_get(const struct dyn_arr* darr, const size_t index);
int             darr_push_front(struct dyn_arr* darr, const int value);
int             darr_push_back(struct dyn_arr* darr, const int value);

/*Скрытые Методы*/
static inline bool is_darr(const struct dyn_arr* darr)                     { return darr != NULL;                                }
static inline bool is_empty(const struct dyn_arr* darr)                    { return darr != NULL && darr->size == 0;             }              
static inline bool is_full(const struct dyn_arr* darr)                     { return darr != NULL && darr->size >= darr->capacity;}
static inline bool is_invalid_index(const struct dyn_arr* darr, size_t idx){ return darr != NULL && idx >= darr->size;           }

#endif //!DYN_ARR_H