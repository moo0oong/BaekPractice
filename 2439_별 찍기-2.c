#include <stdio.h>

int main() {

/*첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제.*/

	int count;
	
	scanf("%d", &count);
	
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (j < count - 1-i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	

	return 0;
}
