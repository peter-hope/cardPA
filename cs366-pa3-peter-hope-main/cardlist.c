#include "cardlist.h"
#include <stdio.h>
#include <stdlib.h>
#include "memwatch.h"
#include "card.h"

//Peter Hope
//PA3 - cardlist.c


//make new list of cards
list_t list_create(){

        return NULL;
}

//add a card to the beginning of the list
int list_add_start(list_t *this_list, card add){
        node_t* new_node = malloc(sizeof(node_t));
        new_node->value = add;
        new_node->next = *this_list;
        *this_list = new_node;
        return 0;
}

//add a card to the end of the list
int list_add_end(list_t *this_list, card add){
	node_t* new_node = malloc(sizeof(node_t));
	new_node->value = add;
	new_node->next = NULL;

	if (this_list == NULL){
		*this_list = new_node;
	}
	else{
		node_t *curr = *this_list;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = new_node;
	}
	return 0;
}

//print each card in the list
void list_print( list_t *this_list){
        node_t* curr = *this_list;
	printf("current list: ");
        while(1){
                if(curr == NULL)
                        break;
                card_print(curr->value);
		printf(" > ");
                curr = curr->next;
        }
        printf("\n");
}

//search for a card in the list
int list_find(list_t *this_list, card find){
	if (*this_list == NULL)
		return -1;
	node_t *curr = *this_list;
	while (curr != NULL){
		if (curr->value.num == find.num && curr->value.suit == find.suit)	
			return 1;
		curr = curr->next;
	}
	return -1;
}	

//remove first card from list
int  list_pop(list_t *this_list){
	if(*this_list == NULL)
		return -1;
	node_t* tmp = *this_list;
	*this_list = (*this_list)->next;
	free(tmp);
	return 1;
}

//search for a card in the list and remove it
int list_remove(list_t *this_list, card remove){
	if(*this_list == NULL)
                return -1;
	//if card is first in list
        if((*this_list)->value.num  == remove.num && (*this_list)->value.suit == remove.suit){
                list_pop(this_list);
                return 1;
        }
	//otherwise
	node_t *curr = *this_list;
        node_t *prev = *this_list;
        while(curr!=NULL){
                if(curr->value.num == remove.num && curr->value.suit == remove.suit){
                        //delete it
			prev->next = curr->next;
                        free(curr);
                        return 1;
                }
                prev = curr;
                curr = curr->next;
        }
        return -1;
}

//free the list
void list_free(list_t *this_list){
	node_t* curr = *this_list;
	node_t* next;
	while(curr != NULL){
		next = curr->next;
		free(curr);
		curr = next;
	}
	return;
}
