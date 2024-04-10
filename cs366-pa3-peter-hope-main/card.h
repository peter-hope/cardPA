#ifndef CARD_H
#define CARD_H

//Peter Hope
//PA3 - card.h

typedef struct card_t{
	char num;
	char suit;
}card;


card card_create();

int card_is_equal(card a, card b);

void card_print(card a);

#endif
