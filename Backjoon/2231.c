#include <stdio.h>
//brute force Algorithm

int main() {
	int n;
	scanf_s("%d", &n);

		// brute force �̿� (temp �� �̿�)
	for (int i = 0; i < n; i++) {
		int temp = i;
		int num = i;

		// temp �� �̿��Ͽ� �� �ڸ� �� �� ���
		while (temp > 0)
		{
			num += temp % 10;
			temp /= 10;
		}
			// ���� �����ڰ� �ִ� ��쿡�� �� ���� ���
			if (num == n) {
				printf("%d", i);
				n = 0;
				break;
			}
		}
		// ���� �����ڰ� ���� ��쿡�� 0�� ���
		if (n != 0)
			printf("0");
	}