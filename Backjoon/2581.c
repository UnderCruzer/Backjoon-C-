#include <stdio.h>
int main() {
	int m, n;
	scanf("%d\n%d", &m, &n);

	int sum = 0, min = 0;				// ���հ� �ּڰ�
	for (int i = m; i < n; i++) {		// i�� �Ҽ������� ���� �ݺ���
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;					// �Ҽ��� �ƴҽ� break
		}
		if (j == i - 1) {				// i�� �Ҽ��� ���
			sum += i;
			if (min == 0) {				// min�� 0�� ���� i��
				min = i;
			}
		}
		if (i == 2) {
			sum += i;
			min = 1;					// 2�� ���� ���� �Ҽ�
		}
	}
	if (min != 0)
		printf("%d\n%d", sum, min);	   
	else
		printf("-1");
}
			