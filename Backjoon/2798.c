#include <stdio.h>
//brute force Algorithm

int main() {

// 변수 선언 
	int n, m;
	int sum, max = 0;
	int i, j, k;
	int num[100];

	scanf_s("%d %d", &n, &m);
	
	for (i = 0; i < n; i++) {
		scanf_s("%d", &num[i]);
	}

//brute force 이용 (삼중반복문 제시)
	for(i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {

// i, j , k 값 모두 더한 값을 sum 으로 저장
				sum = num[i] + num[j] + num[k];

// 결과 max의 값이 i, j, k값보다 크거나 m보다 작으면 그 값을 출력				
				if (sum > max && sum <=m) {
					max = sum;

				}
			}
		}
	}
	printf("%d\n", max);
		return 0;
}