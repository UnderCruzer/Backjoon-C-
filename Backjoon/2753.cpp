#include <stdio.h>
int main() {
	int year;
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) printf("1");
	else printf("0");

	return 0;
}

//year % 100 != 0 는 100의 배수가 아니여야 한다는 표현으로 NAND가 들어간다
//||는 또는 이라는 뜻으로 모줄로 &&의 뒤를 말함 