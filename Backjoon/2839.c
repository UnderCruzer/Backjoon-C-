#include <stdio.h>
int main() {
	int n,count = 0;
	scanf("%d", &n);

	while (1) 
	{
		if (n % 5 == 0)
			break;				// n�� 5�� ������ n�� 5�� ���� ���� ������ ������ ��
		if (n < 0)				// 5�� ������� Ȯ���ϸ鼭 3kg�� ���ָ� 0�� ������ �ʰ� ������ ����
		{
			count = -1;
				break;
		}
		n -= 3;					// 3kg�� ���ָ鼭 count ����
		count++;

	}
	if (count >= 0) count += n / 5;
								// count�� -1�� ��츦 ����, 5�� ����� kg�� �ʿ��� ���� �� ������
	printf("%d", count);
