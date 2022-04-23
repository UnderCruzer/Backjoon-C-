#include <stdio.h>
#define _CRT_SECURES_NO_WARNINGS
 int main() {
	int n, result;
	scanf_s("%d", &n);
	
	result = n;

	int a, b, c, d;
	int count = 0;
	while (1) {
		a = n / 10, b = n % 10; //a는 십의 자리 수 b는 일의 자리 수
		c = (a + b) % 10;       
		d = (b * 10) + c;

	n = d;
	count++;

		if (d == result)
			break;
	}
	
	printf("%d", count);

	return 0;
 }