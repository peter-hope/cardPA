#include <stdio.h> 
#include "card.h"
#include <string.h>
#include "memwatch.h"

//Peter Hope
//PA3 - card.c


//create new card
card card_create(){
	card new_card;
	printf("Enter card: ");
	char enter_key;
	scanf("%c%c%c", &new_card.num, &new_card.suit, &enter_key);
	return new_card;
}

//compare two cards
int card_is_equal(card a, card b){
	//will return 1 for equal and -1 for not equal
	if (a.num != b.num)
		return -1;
	if (a.suit != b.suit)
		return -1;
	return 1;
}

//pretty print a card
void card_print(card a){
	char num[10] = "";
	char suit[10] = "";

	//face cards
	if(a.num == 'J')
		strcpy(num, "Jack");
	else if(a.num == 'Q')
  		strcpy(num, "Queen");
	else if(a.num == 'K')
 		strcpy(num, "King");
	else if(a.num == 'A')
		strcpy(num, "Ace");
	else
		num[0] = a.num;

	//suits
	if(a.suit == 'S')
		strcpy(suit, "Spades");
	if(a.suit == 'H')
		strcpy(suit, "Hearts");
	if(a.suit == 'D')
		strcpy(suit, "Diamonds");
	if(a.suit == 'C')
		strcpy(suit, "Clubs");

	//print
	printf("%s of %s", num, suit);
	
	return;
}
