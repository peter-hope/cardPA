#ifndef LIST_H_
#define LIST_H_
#include "card.h"

//Peter Hope
//PA3 - cardlist.h

typedef struct node_s {
        card value;
        struct node_s * next;
} node_t;


typedef node_t* list_t;


list_t list_create();


int list_add_start(list_t *this_list, card add);

int list_add_end(list_t *this_list, card add);

void list_print(list_t *this_list);

int list_find(list_t *this_list, card find);

int list_pop(list_t *this_list);

int list_remove(list_t *this_list, card remove);

void list_free (list_t *this_list);



#endif
