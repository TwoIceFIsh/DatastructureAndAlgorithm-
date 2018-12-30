#include "NameCard.h"
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

NameCard *MakeNameCard(char *name, char *phone) {

	Card  *card = (Card *)malloc(sizeof(Card));
	strcpy(card->name, name);
	strcpy(card->phone, phone);
	 

	return card;
}

void ShowNameCardInfo(NameCard *pcard) {

	printf("%s, %s\n", pcard->name, pcard->phone);

}

int NameCompare(NameCard * pcard, char *name) {

	return strcmp(pcard->name, name);


}

void ChangePhoneNum(NameCard *pcard, char *phone) {

	strcpy(pcard->phone, phone);

}