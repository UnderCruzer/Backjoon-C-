#include <stdio.h>
//brute force Algorithm

int main() {
	int n;
	scanf_s("%d", &n);

		// brute force 이용 (temp 를 이용)
	for (int i = 0; i < n; i++) {
		int temp = i;
		int num = i;

		// temp 를 이용하여 각 자리 수 합 계산
		while (temp > 0)
		{
			num += temp % 10;
			temp /= 10;
		}
			// 만약 생성자가 있는 경우에는 그 값을 출력
			if (num == n) {
				printf("%d", i);
				n = 0;
				break;
			}
		}
		// 만약 생성자가 없는 경우에는 0을 출력
		if (n != 0)
			printf("0");
	}