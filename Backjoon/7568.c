#include <stdio.h>

// brute force Algorithm
int main() {
	int N, count = 0;

	// ��ü ����� ���� 50���� �̱⿡ 50���� �迭 ����� x,y�� �����Կ� Ű�� ���Ѵ�.
	int weight[50] = { 0, };
	int height[50] = { 0, };
	
	// ��ü ��� �� �Է� : ù �ٿ��� ��ü ����� n�� ���;� �� 
	scanf_s("%d", &N);

	// i ������ ����� i�� ���� �Է��� n�� ������ �ݺ� (�����Կ� Ű �� �Է�)
	for (int i = 0; i < N; i++) 
		scanf_s("%d %d", &weight[i], &height[i]);
	
	
	// ��ġ ��� ����� ���� brute force �˰��� �̿�
	for (int i = 0; i < N; i++) {
		count = 0;

		for (int j = 0; j < N; j++) {

	// �����Կ� Ű�� ������ count �� ����
			if (weight[i] < weight[j] && height[i] < height[j]) {
				count++;
		}
	// for������ ���ͼ� �������� �ڽź��� ū ��ġ�� �ο��� count�� �ϰ� + 1 �� ��
		printf("%d", count+1);
	}
	return 0;
}