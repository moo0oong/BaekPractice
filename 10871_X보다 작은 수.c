#include <stdio.h>

int main() {

	int count;
	int stan;
	int seq;

	scanf("%d %d", &count, &stan);

	for (int i = 0; i < count; i++) {
		scanf("%d", &seq);
		if (seq < stan)
			printf("%d ", seq);

	}

	return 0;
}
