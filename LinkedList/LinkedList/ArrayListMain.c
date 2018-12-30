#include <stdio.h>
#include "ArrayList.h"

void main() {


	List list;
	LData getData;
	LData sum;

	//리스트 초기화
	ListInit(&list);

	//리스트 1~9 저장
	for (int i = 1; i < 10; i++)
		LInsert(&list, i);

	//리스트 값의 총합
	LFirst(&list, &getData);
	sum = getData;

	while (LNext(&list, &getData) == TRUE) {
		sum += getData;
	}
	printf("sum = %d\n", sum);


	//2의 배수 3의 배수 삭제
	LFirst(&list, &getData);
	if (getData % 3 == 0 || getData % 2 == 0) {
		LRemove(&list);
	}

	while (LNext(&list, &getData) == TRUE) {
		if (getData % 3 == 0 || getData % 2 == 0) {
		
			LRemove(&list);
		}
	}

	//삭제후 데이터 출력
	LFirst(&list, &getData);
	printf(" %d ", getData);
	while (LNext(&list, &getData) == TRUE)
		printf(" %d ", getData);


	return;
}