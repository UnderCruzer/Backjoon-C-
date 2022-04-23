#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	//scanf 할 때 오류나니까 scanf_s로 할 것
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