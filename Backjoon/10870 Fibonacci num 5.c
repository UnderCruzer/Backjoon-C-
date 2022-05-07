#include <stdio.h>
int Fibonacci(int n) {
	if (n >= 2)
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	else if (n == 1) return 1;
	else return 0;
}
int main() {
	int n;
	scanf("%d", &n);
		printf("%d\n", Fibonacci(n));
		return 0;
	}
