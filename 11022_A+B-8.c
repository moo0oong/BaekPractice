  #include <stdio.h>

int main() {

/*각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다. x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다..*/

	int count;
	int a, b;
	
	scanf("%d", &count);
	
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i+1,a,b, (a+b));
	}
	

	return 0;
}
