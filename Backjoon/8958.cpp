#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int input, sum, scr; //�Է°��� ������ �� �׸��� ����
	char test[80]; //80���� ���ڿ� -->���ڴ� char
	
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		sum = 0; //������ ���� 0���� �ʱ�ȭ--->for�� ������ ���� ������ ���ο� ���ڿ��� ����
		scr = 1;  //���� 1�� �ʱ�ȭ
		scanf("%s", test);    //test�� o�� x ����
		for (int j = 0; j < strlen(test); j++) {   //for���� ���� O,X �� ���� �����ֱ�
			if (test[j] == 'O') {
				sum += scr;    //������ �յ��� ���ؼ� ������ 
				scr++;           //O�� ������ ������ ������

			}
			if (test[j] == 'X')
				scr = 1;        //���� X�� ������  1�� �ʱ�ȭ
		}
			printf("%d\n", sum);
		}
}
