#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

#include <stdint.h>

#include "../mad_config.h"

struct linked_list         // main structure 
{
    struct Node            // node with fields data & ptr to next, prev
    {
        int data;

        struct Node* next; // pointer to next node
        struct Node* prev; // pointer to prev node
    };
    struct Node* head;     // Head linked list
    struct Node* tail;     // tail linked list
};


/* TEST METODES */
struct linked_list* list_init(int);            // initizlyzetion memory for linked list
int list_remv(struct linked_list**);           // removing linked list

int list_insert_at(size_t);                    // insert new node at 

int list_push_front(struct linked_list*, int); // push new node at front
int list_push_back(struct linked_list*, int);  // push new node at back

int list_pop_front();                          // remove node in front
int list_pop_back();                           // remove node in back

#endif //!DOUBLE_LINKED_LIST