//��������
#include <stdio.h>

void selection_sort(int numArr[5],int count) {
	int target;
	int min_index;
	for (int i = 0; i < count; i++) {
		target = numArr[i];
		for (int j = i+1; j < count; j++) {
			if (target > numArr[j]) {
				target = numArr[j];
				min_index = j;
			}
		}
		numArr[min_index] = numArr[i]; numArr[i] = target;
		/*
		���
		for (int i = 0; i < count; i++) {
			printf("%d ", numArr[i]);
		}
		printf("\n");
		*/
	}
	
}
int main() {
	int numArr[5] = { 4,3,1,5,2 };   // ���ĵ��� ���� �迭
	int count = sizeof(numArr) / sizeof(int);
	selection_sort(numArr, count);
}