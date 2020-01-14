#include <stdio.h>

int main() {

	int a, b, c;
	int first_high, first_low;
	int sec_comp;
	int ans;

	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a >= b){
		first_high = a; 
		first_low = b;
	}
	else {
		first_high = b;
		first_low = a;
	}
		
	if (first_high >= c) {
		if (first_low >= c)
			ans = first_low;
		else
			ans = c;
	}
	else
		ans = first_high;

	printf("%d", ans);
	

	system("pause");
	return 0;
}