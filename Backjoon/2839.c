#include <stdio.h>
int main() {
	int n,count = 0;
	scanf("%d", &n);

	while (1) 
	{
		if (n % 5 == 0)
			break;				// n이 5의 배수라면 n을 5로 나눈 것이 봉지의 개수가 됨
		if (n < 0)				// 5의 배수인지 확인하면서 3kg를 빼주면 0이 나오지 않고 음수가 나옴
		{
			count = -1;
				break;
		}
		n -= 3;					// 3kg씩 빼주면서 count 증가
		count++;

	}
	if (count >= 0) count += n / 5;
								// count가 -1인 경우를 제외, 5의 배수인 kg에 필요한 봉지 수 더해줌
	printf("%d", count);
