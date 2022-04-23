#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int input, sum, scr; //입력값과 점수의 합 그리고 점수
	char test[80]; //80개의 문자열 -->문자는 char
	
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		sum = 0; //점수의 합을 0으로 초기화--->for문 끝날시 다음 나오는 새로운 문자열로 인해
		scr = 1;  //점수 1로 초기화
		scanf("%s", test);    //test에 o과 x 지정
		for (int j = 0; j < strlen(test); j++) {   //for문에 의해 O,X 총 개수 세어주기
			if (test[j] == 'O') {
				sum += scr;    //점수의 합들을 더해서 점수로 
				scr++;           //O가 나오면 점수도 오르게

			}
			if (test[j] == 'X')
				scr = 1;        //만약 X가 나오면  1로 초기화
		}
			printf("%d\n", sum);
		}
}
