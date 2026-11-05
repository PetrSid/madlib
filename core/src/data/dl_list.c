#include "data/dl_list.h"

#include <stdlib.h>

struct linked_list* list_init(int val)
{
    struct linked_list* list;
    list = (struct linked_list*)malloc(sizeof(struct linked_list));
    if(!list){
        LOG_ERR("Failed to allocate memory for linked list"); // OOM check
        return NULL;
    }
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if(!node){
        LOG_ERR("Failed to allocate memory for initial node"); // OOM check
        free(list);
        return NULL;
    }
    node->data = val;
    node->next = NULL;
    node->prev = NULL;

    list->head = node;
    list->tail = node;

    return list;
}

int list_remv(struct linked_list** tmp_list)
{
    // Null ptr check
    if (!tmp_list || !(*tmp_list)){
        LOG_ERR("Invalid list pointer passed to list_remv"); 
        return -1;
    }

    struct linked_list* list = *tmp_list;
    struct Node* tmp_node;

    while (list->head != NULL)
    {
        tmp_node   = list->head;
        list->head = list->head->next; // At the end, `head` is always `NULL`; 
                                       // there is no trailing pointer;
        free(tmp_node);
    } free(list);
    *tmp_list = NULL;

    return 0;
}


// new_branch

int list_insert_at(size_t)

int list_push_front(struct linked_list*, int) {}
int list_push_back(struct linked_list*, int) {}

int list_pop_front() {}
int list_pop_back() {}