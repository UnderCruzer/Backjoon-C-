#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	//scanf �� �� �������ϱ� scanf_s�� �� ��
	if (a > b) {
		printf(">\n");
	}
	else if(a < b) {
		printf("<\n");
	}
	else {
		printf("==\n");
	}
	
	
	return 0;
}