// #include "test.h"

#include <assert.h>
#include <stdlib.h>
#include "data.h"


void run_test()
{
    // Случаи
    /* Списка Нет */
    assert(list_push_front(NULL, 5) == -1);

    /*  Список есть нод нет   */
    struct linked_list* list = list_init(10);
    // if(!list) { return -1; }

    free(list->head);
    list->head = NULL;
    // Проверка
    assert(list_push_front(list, 1) == 0);
    assert(list_push_front(list, 2) == 0);
    //
    list_remv(&list);

    /*  Список есть нода одна   */
    struct linked_list* list2 = list_init(10);
    // if(!list2) { return -1; }

    assert(list_push_front(list2, 7) == 0);


    /*  Список есть Нод несколько   */
    assert(list_push_front(list2, 7) == 0);
    assert(list_push_front(list2, 10) == 0);
    assert(list_push_front(list2, 2) == 0);


    list_remv(&list2);
}


int main()
{
    run_test();

    // run_tests_main();
    return 0;
    // gcc -g -O0 main.c -o alg
    // gcc -std=c11 -g -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion ../src/main.c ../src/dyn_arr.c -o dyn
    // gcc ../src/main.c ../src/dyn_arr.c -o dyn
}