//삽입 정렬
#include <stdio.h>
void insertion_sort(int numArr[5],int count) {
	int temp;
	int index;
	for (int i = 1; i < count; i++) {
		index = i;
		for (int j = i - 1; j >= 0; j--) {
			if (numArr[index] < numArr[j]) {
				temp = numArr[index];
				numArr[index] = numArr[j];
				numArr[j] = temp;
				index--;
			}
			else break;
			/*출력
			for (int k = 0; k < count; k++) {
				printf("%d ", numArr[k]);
			}
			printf("\n");
			*/
		}
	}

}
int main() {
	int numArr[5] = { 4,3,1,5,2 };
	int count = sizeof(numArr) / sizeof(int);
	insertion_sort(numArr, count);
}
