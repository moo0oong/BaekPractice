#include <stdio.h>

int main() {

/*자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.*/

	int count;
	
	scanf("%d", &count);
	
	for (int i = 1; i <= count; i++) {
		printf("%d\n", i);
	}
	
	
	return 0;
}
