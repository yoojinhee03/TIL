//¼±Çü Å½»ö
#include <stdio.h>

void linear_search(int numArr[5], int count, int target) {
	for (int i = 0; i < count; i++) {
		if (numArr[i] == target) {
			printf("Å½»öÈ½¼ö : %d", i+1);
			break;
		}
	}

}
int main() {
	int numArr[5] = { 4,3,1,5,2 };   // Á¤·ÄµÇÁö ¾ÊÀº ¹è¿­
	int count = sizeof(numArr) / sizeof(int);
	int target = 5;
	linear_search(numArr, count, target);
}