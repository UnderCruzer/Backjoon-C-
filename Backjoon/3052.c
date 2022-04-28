#include <stdio.h>
#define _CRT_SECURES_NO_WARNINGS

int main(void) {
	int a, b = 0;
	int remain[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a);
		remain[i] = (a % 42);
		
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (remain[i] == remain[j])
				count++;
	}
	
		if (count == 0) b++;
	}
	printf("%d", b);
}





