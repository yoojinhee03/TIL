//버블정렬
#include <stdio.h>

void bubble_sort(int numArr[10],int count) {
	int temp;
	for (int i = 0; i < count - 1; i++) {
		for (int j = i+1; j < count; j++) {
			if (numArr[i] > numArr[j]) {
				temp = numArr[i]; numArr[i] = numArr[j]; numArr[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("%d ", numArr[i]);
	}
}
int main()
{

	//입력으로 변경
	int numArr[10] = { 4, 2, 8, 9, 3, 7, 1, 10, 6, 5 };   // 정렬되지 않은 배열
	int count = sizeof(numArr) / sizeof(int);
	bubble_sort(numArr, count);

}