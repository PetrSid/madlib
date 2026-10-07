#include "data/dl_list.h"

#include <stdio.h>

struct linked_list* init(int val)
{
    struct linked_list* list;
    list = (struct linked_list*)malloc(sizeof(struct linked_list));
    if(!list){
        LOG_ERR("Test error");
        return NULL;
    }
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if(!node){
        LOG_ERR("Test error");
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
int remv(struct linked_list** list)
{

}