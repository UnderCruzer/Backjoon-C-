#include <stdio.h>
/* �Ҽ��� 1�� �ڱ� �ڽŸ��� ����� ����
��, 2���� (�Ҽ� - 1)���ڵ�� ��� �־��� ���� �������� �� ����������� �ʴ´ٸ�
�־��� ���� �Ҽ��� �ȴ�. */
int main() {
	int n;
	int num, count= 0;
	// n�� �Ҽ�, �Ҽ��� ������ int�� �޴´�

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		
		for (int j = 2; j <= num; j++) {  //�Ҽ� �˻�
			
			if (num == j)  
				count++;    // �Ҽ��� ���� �� count++
			
			if (num % j == 0)
				break;
		
		}
	}
	printf("%d", count);
}