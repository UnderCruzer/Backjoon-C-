#include <stdio.h>

int num, d, t;									//d 는 대각선 위치 num은 n번째 분수

int main() {
	scanf("%d", &num);

	for (; d * (d + 1) / 2 < num; d++) {
												//대각선 하나당 숫자 1개씩 증가 모든 숫자들의 개수 더해준다
	}
	t = num - d * (d - 1) / 2;
												//t는 대각선 몇번째 분수인지 
	
	if (d % 2 == 0) {							//짝수 번째 대각선 위에서 아래
		printf("%d/%d", t, d - t + 1);
	}
	else										// 홀수 번째 대각선 아래에서 위
		printf("%d/%d", d - t + 1, t);
}