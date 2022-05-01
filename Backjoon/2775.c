#include <stdio.h>
int main() {
	int i, j;
	int t, k, n;
	int arr[15][15] = { 0, };

	i = 0;
	while (i < 15) {
		arr[0][i] = i;
		i++;
	}

	i = 1;
	while (i < 15) {
		arr[i - 1][i] = 1;
		j = 1;
		while (j < 15) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			j++;
		}
		i++;
	}
	scanf("%d", &t);
	i = 0;
	while (i < t) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
		i++;
	}
}