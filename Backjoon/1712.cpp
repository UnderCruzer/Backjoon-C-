#include <stdio.h>
int main() {
	long A = 0, B = 0, C = 0, X = 1;
	scanf("%ld %ld %ld", &A, &B, &C);

	if (B >= C) {
		printf("-1");
		return 0;
	}
	X = A / (C - B) + 1;
	printf("%d", X);

	return 0;
}