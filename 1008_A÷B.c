#include <stdio.h>
#pragma warning(disable : 4996)
void sub(double a, double b){
	printf("%.32lf", a / b);
}
int main()
{
	double A, B;
	scanf("%lf %lf", &A, &B);
	sub(A, B);
	return 0;
}
