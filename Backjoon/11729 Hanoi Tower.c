#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS
void hanoi_tower(int n, char from, char temp, char to) {
	
	if (n == 1)
		printf("%d %d \n", from, to);
	else {
		hanoi_tower(n - 1, from, to, temp);
		printf("%d %d\n", from, to);
		hanoi_tower(n - 1, temp, from, to);
	}

}

int main() {
	int input;
	scanf_s("%d", &input);
	printf("%d \n", (1 << input) - 1);
	hanoi_tower(input, 1, 2, 3);
	return 0;

}
