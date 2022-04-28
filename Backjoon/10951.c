#include <stdio.h>
int main() {
	int a, b;
	while(scanf("%d %d", &a, &b) !=EOF)
	/*정상적인 프로그램 종료를 위해, 소스로부터
	   읽어 들일 수 없음을 나타낼 때 EOF(End Of File)'파일의 끝'을 이용
	   EOF란 파일의 끝을 표현하기 위한 매크로로 정의된 상수를 말하는데 C에서는 항상 -1로 변환
	   주로 입력이 없을 때 파일을 종료시키기 위해 쓰임*/
		printf("%d\n", a + b);
	
	return 0;
}