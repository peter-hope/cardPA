#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "memwatch.h"
#include "cardlist.h"
#include "card.h"

#define INSERT_BEGINNING 'b'
#define INSERT_END       'e'
#define DELETE           'd'
#define FIND             'f'
#define PRINT            'p'
#define QUIT             'q'

static const int BUFFER_LENGTH = 2;

//Peter Hope
//PA3 - cardmain.c




/* purpose: print a message and terminate the program
 * input:   the message
 * returns: never!! terminates progam
 */
static void die(char *msg)
{
  perror(msg);
  exit(-1);
}

//main
int main(int argc, char *argv[])
{
  char command[BUFFER_LENGTH];
  list_t list = list_create();
  int more_commands=1;

  while (more_commands)
  {
	  char enter_key;
	  scanf("%c%c", command, &enter_key);
	  if (command == NULL)
		  die("fgets");
	  
	  switch (*command)
	  {
		case DELETE:
			//remove card from list//	   	
          		if(list_remove(&list, card_create()) == -1)
                  		printf("Delete failed, card not found\n");
			else
				printf("Deleted\n");
			list_print(&list);
			break;

	  	case FIND:
          		//print out the card we found// 
              		if(list_find(&list, card_create()) == -1)
		      		printf("Card Not Found\n");
	      		else{
	      			printf("Card Found\n");
	  		}
          		break;

      		case INSERT_BEGINNING:
          		//add card to start of list//
	  		list_add_start(&list,card_create());	
          		break;

		case INSERT_END:
          		//add card to end of list//  
              		list_add_end(&list, card_create());
          		break;

      		case PRINT:
          		//print current list of cards// 
          		list_print(&list);
          		break;

      		case QUIT:
			//quit program//
          		list_free(&list);
          		exit(0);

      		default: printf("Invalid command!\n"); break;
    }
  }
}

