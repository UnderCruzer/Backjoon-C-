#include <stdio.h>
#define _CRT_SECURES_NO_WARNINGS
int main() {
	int N, num;
	int max = -1000001, min = 1000001;

	scanf_s("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &num);
		if (max < num) max = num;
		if (min > num) min = num;
	}
	printf("%d %d", min, max);
}