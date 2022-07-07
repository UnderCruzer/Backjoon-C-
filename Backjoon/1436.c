#include <stdio.h>

int i, temp, check, count = 1;
int main()
{
    int series;
    scanf("%d", &series);
    if (series == 1) {
        printf("666");
        return 0;
    }
    for (i = 667;; i++) {
        temp = i;
        check = 0;
        while (temp) {
            if (temp % 1000 == 666) {
                check = 1;
            }
            temp /= 10;
        }
        if (check) {
            count++;
            if (count == series) {
                break;
            }
        }
    }
    printf("%d\n", i);
    return 0;
}