#include <stdio.h>
// Greedy Algorithm 

int main() {

// �ִ밡 10�����̱⿡ �迭 ����	
	int arr[11];

// ������ ������ �� �Է�
	int n, cost;
	scanf_s("%d %d", &n, &cost);
	
	for (int i = 0; i < n; i++) {
		
		int k;
		scanf_s("%d", &k);
		arr[i] = k;
	}

// ������ ���� 0���� ����
	int sum = 0;
	
// �ݺ����� �迭�� 0���� �ݺ�
	for (int i = n - 1; i >= 0; i--) {

// ���� ������ �ּڰ��� ���ϱ� ���� cost�� ������ �迭�� ���� ������.
		sum += cost / arr[i];
		
// cost�� ������ �迭�� ���� ���������� ���� cost�� ������ ���� ������	
		cost %= arr[i];
	}
	printf("%d", sum);

}