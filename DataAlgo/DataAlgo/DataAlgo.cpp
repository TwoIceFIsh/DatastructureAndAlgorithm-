#include <stdio.h>

int BinarySearch(int arr[], int length, int search);
int LinearSearch(int arr[], int length, int search);
int ReculsiveFactorial(int n);
int ReculsiveFibonacci(int n);
int ReculsiveBinarySearch(int arr[], int search, int first, int last);

int main()
{
	int arr[] = { 5, 6 ,8 ,10, 15, 18 };
	int wait;
	int result = 0;

	//	int index = BinarySearch(arr, sizeof(arr) / sizeof(int), 7);
	//	printf("%d", index);

	//for (int i = 1; i < 10; i++)
	//	printf("%d ", ReculsiveFibonacci(i));

	result = ReculsiveBinarySearch(arr, 4, 0, sizeof(arr) / sizeof(int));
	printf("%d ", result);


	scanf("%d", &wait);

	return 0;
}

int LinearSearch(int arr[], int length, int search) {

	for (int i = 0; i < length; i++) {

		if (arr[i] == search)
			return i;

		else
			return -1;
	}
}

int BinarySearch(int arr[], int length, int search) {

	int first = 0;
	int last = length;
	int mid;

	while (first <= last) {

		mid = (first + last) / 2;

		if (search == arr[mid]) {
			return mid;
		}
		else {
			if (search < arr[mid]) {
				last = mid - 1;
			}

			else {
				first = mid + 1;
			}
		}


	}


	return -1;
}

int ReculsiveFactorial(int n) {

	if (n == 0)
		return 1;

	return n * ReculsiveFactorial(n - 1);
}

int ReculsiveFibonacci(int n) {

	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return ReculsiveFibonacci(n - 1) + ReculsiveFibonacci(n - 2);



}

int ReculsiveBinarySearch(int arr[], int search, int first, int last) {

	int mid = (first + last) / 2;
	if (first > last)
		return -1;

	if (search == arr[mid]) {
		return mid;
	}
	if (search <= arr[mid]) {
		last = mid - 1;
		ReculsiveBinarySearch(arr, search, first, last);
	}
	else {
		first = mid + 1;
		ReculsiveBinarySearch(arr, search, first, last);
	}




}

//void HanoiTowerMove(int num, char from, char by, char to)
//{
//	if (num == 1){
//		printf("원반 1을 %c에서 %c로 이동 \n", from, to);
//	}
//
//	if (num == 2) {
//		printf("원반 2를 %c에서 %c로 이동 \n", num, by, to);
//	}
//
//
//
//	HanoiTowerMove(num-1, from, by, to);
//	
//
//
//
//
//}