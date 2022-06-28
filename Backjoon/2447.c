#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS

int star(int x, int y, int n) {
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) {
		printf(" ");
	}
	// 공백이 나온 좌표를 (1,1)이라고 하면 n이 9일 때 4,1 7,1 좌표에 공백 생성
	else if (n / 3 == 0) {
		printf("*");
	}
	// n이 3보다 작은 경우 *출력
	else
		star(x, y, n / 3);
	// 그렇지 않다면 함수 호출
}

int main() {
	int n, i, j;
	scanf("%d", &n);
	i = 0;
	while (i < n) {
		j = 0;
		while (j < n) {
			star(j, i, n);
			j++;
		}
		printf("\n");
		i++;
	}
}
