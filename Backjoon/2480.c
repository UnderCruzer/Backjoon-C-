/*�� ������(logical operation)
1) && -AND
a && b && c���� abc �� �ϳ��� false 0�� ���ö��� ������� ����Ͽ��� �� 0���� ������ ��
���� abc�� ���� true 1�� ���� ���� ������� ����Ͽ��� �� 1�� ������ ��

2) || -OR
a && b && c���� abc �� �ϳ��� true 1�� ���ö��� ������� ����Ͽ��� �� 1�� ������ ��
a && b && c���� abc�� 0�� ���ö��� ������� ����Ͽ��� �� 0���� ������ ��

3) !- NOT
����� �ݴ�
int main() {
	int man = 0;
	int age = 0;
	printf("%d", !(man || age)); --------->!�� �Ἥ printf�� ���� �ݴ��� ���
		return 0;

	�� ������� 1 ���� NOT �����ڰ� ���ٸ� 0�� ������ ��*/




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b, c;
	int prize = 0;
	int max = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == b && b == c && a == c)
		prize = 10000 + a * 1000;
		//1�� ����
	

	else if (a == b || a == c) 
		prize = 1000 + a * 100;
		//2�� ���� ù ��° ����� ��
	

	else if (b == c) 
		prize = 1000 + b * 100;
		//2�� ���� �� ��° ����� ��
	

	//3��° ����
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