#include <stdio.h>
#include "ArrayList.h"

void main() {


	List list;
	LData getData;
	LData sum;

	//����Ʈ �ʱ�ȭ
	ListInit(&list);

	//����Ʈ 1~9 ����
	for (int i = 1; i < 10; i++)
		LInsert(&list, i);

	//����Ʈ ���� ����
	LFirst(&list, &getData);
	sum = getData;

	while (LNext(&list, &getData) == TRUE) {
		sum += getData;
	}
	printf("sum = %d\n", sum);


	//2�� ��� 3�� ��� ����
	LFirst(&list, &getData);
	if (getData % 3 == 0 || getData % 2 == 0) {
		LRemove(&list);
	}

	while (LNext(&list, &getData) == TRUE) {
		if (getData % 3 == 0 || getData % 2 == 0) {
		
			LRemove(&list);
		}
	}

	//������ ������ ���
	LFirst(&list, &getData);
	printf(" %d ", getData);
	while (LNext(&list, &getData) == TRUE)
		printf(" %d ", getData);


	return;
}