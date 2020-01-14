#include <stdio.h>

int main() {

	int A[5], B[5], i;
	
	scanf_s("%d", &i);
	

	for (int a = 0; a < i; a++) {
		scanf_s("%d %d", &A[a], &B[a]); //scanf에서 개행이 있으면 한번 더 입력하게된다. 왜 그런지 고민해보자.
	}
	for (int b = 0; b < i; b++) {
		printf("%d", A[b] + B[b]);
	}
	system("pause");
	return 0;
}