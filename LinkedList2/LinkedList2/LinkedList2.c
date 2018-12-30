#include <stdio.h>
#include "NameCard.h"
#include "ArrayList.h"

void main() {

	List list;
	Card * pcard;
	ListInit(&list);

	pcard = MakeNameCard("이병호", "010-5461-3245");
	LInsert(&list, pcard);

	pcard = MakeNameCard("김철수", "010-2341-1785");
	LInsert(&list, pcard);

	pcard = MakeNameCard("박보영", "010-4421-1785");
	LInsert(&list, pcard);


	LFirst(&list, &pcard);
	if (!NameCompare(pcard, "이병호")) {
		ShowNameCardInfo(pcard);
	}
	else {
		while (LNext(&list, &pcard)) {
			if (!NameCompare(pcard, "이병호")) {
				ShowNameCardInfo(pcard);
				break;
			}
		}

	}


	LFirst(&list, &pcard);
	if (!NameCompare(pcard, "김철수")) {
		ChangePhoneNum(pcard, "010-1111-1111");
	}
	else {
		while (LNext(&list, &pcard)) {
			if (!NameCompare(pcard, "김철수")){
				ChangePhoneNum(pcard, "010-1111-1111");
				break;
			}
				
		}

	}


	LFirst(&list, &pcard);
	if (!NameCompare(pcard, "박보영")) {
		LRemove(&list);
	}
	else {
		while (LNext(&list, &pcard)) {
			if (!NameCompare(pcard, "박보영")) {
				LRemove(&list);
				break;
			}
		}

	}

	LFirst(&list, &pcard);
	ShowNameCardInfo(pcard);

	while (LNext(&list, &pcard)) {
		ShowNameCardInfo(pcard);
	}













}