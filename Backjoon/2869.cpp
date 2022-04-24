#include <stdio.h>
int main() {
	int a, b, v, d;
	scanf("%d %d %d", &a, &b, &v);

	d = (v - b - 1) / (a - b) + 1;      // v에 도달할려면 A-B만큼 올라간 횟수를 더해주면 됨
	printf("%d", d);					

	return 0;
}

/* #include <stdio.h>

int main() {

    long long a, b, v, count = 0, days = 0;
    scanf("%lld %lld %lld", &a, &b, &v);

    while (1) {
        count += a;
        days++;
        if (count >= v) {
            break;
        }
        else {
            count -= b;
        }
    }

    printf("%lld", days);

    return 0;
} */