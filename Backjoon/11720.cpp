#include <stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	char arr[n];   
	scanf("%s", &arr);
	for (int i = 0; i < n; i++) {
		sum += arr[i] - '0';
	}
	/* char������ �����Ͽ��� ������ �ƽ�Ű �ڵ尡 ������
	�ƽ�Ű �ڵ�� 48�� 0�̴�. 
	 ex) '1'-'0'= 49 - 48 = 1 
		 '2'-'0'= 50 - 48 = 2 */
	printf("%d", sum);
}