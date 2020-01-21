#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int fir, sec, thi, fou;
	fir = b / 100;
	sec = (b % 100) / 10;
	thi = b % 10;
	printf("%d\n", a*thi);
	printf("%d\n", a*sec);
	printf("%d\n", a*fir);
	printf("%d", a*b);
	return 0;
}
