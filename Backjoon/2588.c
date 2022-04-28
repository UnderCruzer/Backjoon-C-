#include <stdio.h>

	/*scanf("%d %d", &A, &B);
	int line3 = A * (B % 10);
	int line4 = A * ((B / 10) % 10);
	int line5 = A * (B / 100);
	

	printf("%d/n", line3);
	printf("%d/n", line4);
	printf("%d/n", line5);
	printf("%d/n", line6);*/

#include <stdio.h>
int main(void) {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b / 10) % 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);

	return 0;
}