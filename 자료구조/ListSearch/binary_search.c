//�̺� Ž��
#include <stdio.h>

void binary_search(int numArr[9], int count, int target) {
	int left = 0;
	int right = count - 1;
	int mid;
	while(1) {

		mid = (left + right) / 2;
		left = numArr[mid] < target ? mid + 1 : left;
		right = numArr[mid] > target ? mid - 1 : right;
		
		if (numArr[mid] == target) {
			printf("%d�� �ε��� %d�� �ֽ��ϴ�", target, mid);
			break;
		}
	}
}
int main() {

	int numArr[9] = { 1,2,3,7,9,12,21,23,27 };
	int count = sizeof(numArr) / sizeof(int);
	int target = 7;
	binary_search(numArr, count, target);
}