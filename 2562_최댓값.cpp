#include <iostream>

using namespace std;
//9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//���� ���, ���� �ٸ� 9���� �ڿ���
//
//3, 29, 38, 12, 57, 74, 40, 85, 61
//
//�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.

int main() {
	int arr[9];
	int val;
	int max = 0;
	int cnt;

	for (int i = 0; i < 9; i++) {
		cin >> val;
		arr[i] = val;
	}
	for (int i = 0; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			cnt = i+1;
		}
			
	}
	cout << max << '\n' << cnt;
	system("pause");
}

/*
���� ����
int main() {
int arr[9];
int val;
int max = 0;
int cnt;

for (int i = 0; i < 9; i++) {
cin >> arr[i];
if (max < arr[i])
{
max = arr[i];
cnt = i + 1;
}
}

cout << max << '\n' << cnt;
system("pause");
}
*/


