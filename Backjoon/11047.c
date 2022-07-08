#include <stdio.h>
// Greedy Algorithm 

int main() {

// 최대가 10까지이기에 배열 생성	
	int arr[11];

// 동전의 개수와 값 입력
	int n, cost;
	scanf_s("%d %d", &n, &cost);
	
	for (int i = 0; i < n; i++) {
		
		int k;
		scanf_s("%d", &k);
		arr[i] = k;
	}

// 동전의 총합 0으로 지정
	int sum = 0;
	
// 반복문이 배열의 0까지 반복
	for (int i = n - 1; i >= 0; i--) {

// 동전 개수의 최솟값을 구하기 위해 cost를 마지막 배열의 수로 나눈다.
		sum += cost / arr[i];
		
// cost는 마지막 배열의 수로 나누어져서 남은 cost는 나누고 남은 나머지	
		cost %= arr[i];
	}
	printf("%d", sum);

}