#include <iostream>

using namespace std;
/*
�� ���� �ڿ��� A, B, C�� �־��� �� A��B��C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

���� ��� A = 150, B = 266, C = 427 �̶��

A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�,

����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.
*/
int main()
{
	int arr[10] = { 0, };
	int num;
	int a, b, c;
	int result;

	cin >> a >> b >> c;
	result = a * b * c;

	while (result > 0) {
		num = result % 10;
		result = result / 10;
		arr[num]++;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	system("pause");
}



