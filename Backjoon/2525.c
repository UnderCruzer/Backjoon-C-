#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()       {
    int A, B, C, result1 = 0, result2 = 0;
    scanf_s("%d %d\n %d", &A, &B, &C);

    if (B + C < 60) {
        result1 = A;
        result2 = B + C;
    }
    else {
        result1 = A + (B + C) / 60;
        result2 = B + C - ((B + C) / 60 * 60);
    }

    if (result1 > 23) {
        result1 -= 24;
    }

    printf("%d %d", result1, result2);
}
