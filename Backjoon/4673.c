#include <stdio.h>

int sum(int n)
{   //셀프 넘버가 아닌 수를 구하는 함수
	int sum = n;

	while (n > 0)
	{
		sum += n % 10;
			n /= 10;        
	}
	return sum;
}
int main() {
	int arr[10001], i, check;   // 10000까지 이기에 배열은 10001로 설정한다

	for (i = 1; i < 10001; i++) {
		check = sum(i);
		if (check < 10001)   //셀프넘버가 아닌 수 확인
			arr[check] = 1;
	}
	for (i = 1; i < 10001; i++) {
		if (arr[i] != 1)    // 셀프넘버수 확인
			printf("%d\n", i);
	}
	return 0;
}