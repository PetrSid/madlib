#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

#include <stdint.h>

#include "../mad_config.h"

struct linked_list // linked_list
{
    struct Node
    {
        int data; //

        struct Node* next; //
        struct Node* prev; //
    };
    struct Node* head; //
    struct Node* tail; //
};


/* TEST METODES */
struct linked_list* init(int);   //
int remv(struct linked_list**); //

int insert_at(size_t num); //

int push_front(struct linked_list*, int); //
int push_back(struct linked_list*, int);  //

int pop_front(); //
int pop_back(); //

#endif //!DOUBLE_LINKED_LIST