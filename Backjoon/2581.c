#include <stdio.h>
int main() {
	int m, n;
	scanf("%d\n%d", &m, &n);

	int sum = 0, min = 0;				// 총합과 최솟값
	for (int i = m; i < n; i++) {		// i는 소수인지에 대한 반복문
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;					// 소수가 아닐시 break
		}
		if (j == i - 1) {				// i가 소수인 경우
			sum += i;
			if (min == 0) {				// min이 0일 때만 i값
				min = i;
			}
		}
		if (i == 2) {
			sum += i;
			min = 1;					// 2는 가장 작은 소수
		}
	}
	if (min != 0)
		printf("%d\n%d", sum, min);	   
	else
		printf("-1");
}
			