#include <iostream>

using namespace std;
/*N개의 정수가 주어진다.이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.*/

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
	//이 프로그램은 백준에서 정답이라고 처리를 하긴 했지만 내 visual studio 컴파일러에서는 결과값이 출력되지 않았다
	//stackoverflow 오류가 발생한 것으로 보아, 배열의 크기로 인해 메모리가 지정된 범위를 넘어간 것 같다.
}

