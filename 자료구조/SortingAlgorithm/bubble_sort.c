//버블정렬
#include <stdio.h>

void bubble_sort(int numArr[10], int count) {
	int temp;
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - i - 1; j++) {
			if (numArr[j] >= numArr[j + 1]) {
				temp = numArr[j]; numArr[j] = numArr[j + 1]; numArr[j + 1] = temp;
			}
			/*출력
			for (int i = 0; i < count; i++) {
				printf("%d ", numArr[i]);
			}
			printf("\n");
			*/
		}
	}
}
int main()
{

	//입력으로 변경
	int numArr[5] = { 4,3,1,5,2 };   // 정렬되지 않은 배열
	//int numArr[10] = { 4, 2, 8, 9, 3, 7, 1, 10, 6, 5 };   // 정렬되지 않은 배열
	int count = sizeof(numArr) / sizeof(int);
	bubble_sort(numArr, count);

}