#include <stdio.h>
int main() {
	int t, h, w, n;									   // 변수는 총 4개
	scanf("%d", &t);

	int i;
	for (i = 0; i < t; i++) {                          // 1호에 손님들을 모두 배정하면 2호, 3호 ...식으로 차례때로 배정
		scanf("%d %d %d", &h, &w, &n);
		                                               
		if (n % h == 0)								   // h와 n을 나누었을 때 나오는 나머지 값은 층이 된다.
			printf("%d\n", h * 100 + (n / h));         // n이 h의 배수라면 h층에 배정

		else                                           // n이 h의 배수가 아니라면 (n을 h로 나눈 나머지)층 (n을 h로 나눈 몫 + 1)호에 배정
			printf("%d\n", (n % h) * 100 + (n / h + 1));
	}

}