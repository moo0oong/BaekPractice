#include <iostream>

using namespace std;

int main() {

	int a, b, c, d, N;
	int count = 0;

	cin >> N;

	int result = N;

	while (1) {
		a = N / 10;
		b = N % 10;
		c = (a + b) % 10;
		d = b * 10 + c;
		N = d;

		count++;

		if (result == d)
			break;
	}

	cout << count;


}