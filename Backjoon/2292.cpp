#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS
int main() {
	int n, x = 0, y = 0, room;
	scanf("%d", &n);

	while (1) {
		if (n <= 6 * x + 1) {
			room = y + 1;
			break;
		}
		x++;
		x += y;
	}
	printf("%d", room);
}