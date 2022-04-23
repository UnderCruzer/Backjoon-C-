#include <stdio.h>
#define _CRT_SECURES_NO_WARNINGS
int main() {
	int input;
	int max = 0;
	int position = 0;

	for (int i = 1; i < 10; i++) {
		scanf("%d", &input);
		if (input > max) {
			max = input;
			position = i;
		}
	}
	printf("%d\n%d\n", max, position);

	return 0;
	}