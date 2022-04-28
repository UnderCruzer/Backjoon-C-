#include <stdio.h>
int main() {
	int n, sum = 0;
	scanf("%d", &n);
	char arr[n];   
	scanf("%s", &arr);
	for (int i = 0; i < n; i++) {
		sum += arr[i] - '0';
	}
	/* char형으로 대입하였기 때문에 아스키 코드가 더해짐
	아스키 코드로 48은 0이다. 
	 ex) '1'-'0'= 49 - 48 = 1 
		 '2'-'0'= 50 - 48 = 2 */
	printf("%d", sum);
}