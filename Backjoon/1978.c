#include <stdio.h>
/* 소수는 1과 자기 자신만을 약수로 가짐
즉, 2부터 (소수 - 1)숫자들로 모두 주어진 수를 나누었을 때 나누어떨어지지 않는다면
주어진 수는 소수가 된다. */
int main() {
	int n;
	int num, count= 0;
	// n과 소수, 소수의 개수를 int로 받는다

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		
		for (int j = 2; j <= num; j++) {  //소수 검사
			
			if (num == j)  
				count++;    // 소수가 나올 시 count++
			
			if (num % j == 0)
				break;
		
		}
	}
	printf("%d", count);
}