#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int C = 0;  // num - test
	int n = 0;  // num - each test , in student count
	scanf("%d", &C);
	for (int i = 0; i < C; i++) {
		scanf("%d", &n);
		int a[1001];
		int sum = 0;
		double avg = 0.0;

		for (int j = 0; j < n; j++) {
			scanf("%d", &a[j]);
			sum += a[j];

		}

		avg = (double)sum / n;
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (avg < a[j]) {
				count++;
			}
		}
			printf("%.3f%%\n", (double)count * 100 / n);

		}
		return 0;
	}
