#include <stdio.h>
//brute force Algorithm

int main() {

// ���� ���� 
	int n, m;
	int sum, max = 0;
	int i, j, k;
	int num[100];

	scanf_s("%d %d", &n, &m);
	
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}

//brute force �̿� (���߹ݺ��� ����)
	for(i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {

// i, j , k �� ��� ���� ���� sum ���� ����
				sum = num[i] + num[j] + num[k];

// ��� max�� ���� i, j, k������ ũ�ų� m���� ������ �� ���� ���				
				if (sum > max && sum <=m) {
					max = sum;

				}
			}
		}
	}
	printf("%d\n", max);
		return 0;
}