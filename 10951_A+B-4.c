#include <stdio.h>

int main() {
	/*두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.*/
	
	int A, B;
	
	while (scanf("%d %d", &A, &B)!= EOF) {		
		printf("%d\n", A + B);

		if ((A||B)==EOF)
			break;
	}

	return 0;
}
