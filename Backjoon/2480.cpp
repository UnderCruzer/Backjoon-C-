/*논리 연산자(logical operation)
1) && -AND
a && b && c에서 abc 중 하나라도 false 0이 나올때는 결과값을 출력하였을 때 0으로 나오게 됨
만약 abc가 서로 true 1이 나올 때는 결과값을 출력하였을 때 1로 나오게 됨

2) || -OR
a && b && c에서 abc 중 하나라도 true 1이 나올때는 결과값을 출력하였을 때 1로 나오게 됨
a && b && c에서 abc가 0이 나올때는 결과값을 출력하였을 때 0으로 나오게 됨

3) !- NOT
결과의 반댓값
int main() {
	int man = 0;
	int age = 0;
	printf("%d", !(man || age)); --------->!를 써서 printf의 값의 반댓값을 출력
		return 0;

	즉 결과값은 1 만약 NOT 연산자가 없다면 0이 나오게 됨*/




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;
	int prize = 0;
	int max = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c && a == c)
		prize = 10000 + a * 1000;
		//1번 조건
	

	else if (a == b || a == c) 
		prize = 1000 + a * 100;
		//2번 조건 첫 번째 경우의 수
	

	else if (b == c) 
		prize = 1000 + b * 100;
		//2번 조건 두 번째 경우의 수
	

	//3번째 조건
	else {
		if (a > b && a > c)
			max = a;
		else if (b > a && b > c)
			max = b;
		else if (c > a && c > b)
			max = c;

		prize = max * 100;
	}

	printf("%d", prize);

}