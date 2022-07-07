#include <stdio.h>

// brute force Algorithm
int main() {
	int N, count = 0;

	// 전체 사람의 수가 50까지 이기에 50까지 배열 만들기 x,y는 몸무게와 키를 말한다.
	int weight[50] = { 0, };
	int height[50] = { 0, };
	
	// 전체 사람 수 입력 : 첫 줄에는 전체 사람수 n이 나와야 함 
	scanf_s("%d", &N);

	// i 변수를 만들어 i가 내가 입력한 n값 전까지 반복 (몸무게와 키 값 입력)
	for (int i = 0; i < N; i++) 
		scanf_s("%d %d", &weight[i], &height[i]);
	
	
	// 덩치 등수 만들기 위한 brute force 알고리즘 이용
	for (int i = 0; i < N; i++) {
		count = 0;

		for (int j = 0; j < N; j++) {

	// 몸무게와 키가 작으면 count 값 증가
			if (weight[i] < weight[j] && height[i] < height[j]) {
				count++;
			}
	// for문에서 나와서 나머지가 자신보다 큰 덩치인 인원을 count로 하고 + 1 할 것
		printf("%d", count+1);
		}
	return 0;
	}
}
