#include <stdio.h>
#define _CRT_NO_SECURE_WARNINGS

int star(int x, int y, int n) {
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) {
		printf(" ");
	}
	// ������ ���� ��ǥ�� (1,1)�̶�� �ϸ� n�� 9�� �� 4,1 7,1 ��ǥ�� ���� ����
	// 
	else if (n / 3 == 0) {
		printf("*");
	}
	// n�� 3���� ���� ��� *���
	else
		star(x, y, n / 3);
	// �׷��� �ʴٸ� �Լ� ȣ��
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