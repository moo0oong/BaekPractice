#include <iostream>

using namespace std;
/*N���� ������ �־�����.�̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

int main() {
	int bus[1000000];
	int min = 1000001;
	int	max = -1000001;
	int count;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> bus[i];
		if (min > bus[i])
			min = bus[i];
		if (max < bus[i])
			max = bus[i];
	}
	cout << min << ' ' << max;
	system("pause");
	//�� ���α׷��� ���ؿ��� �����̶�� ó���� �ϱ� ������ �� visual studio �����Ϸ������� ������� ��µ��� �ʾҴ�
	//stackoverflow ������ �߻��� ������ ����, �迭�� ũ��� ���� �޸𸮰� ������ ������ �Ѿ �� ����.
}


