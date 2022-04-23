#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
    int N;
    int max = 0;
    float average = 0;
  
     scanf("%d", &N);
  int score[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (max < score[i]) {
            max = score[i];
        }
    }
    for (int i = 0; i < N; i++) {
        average += (float)score[i] / max * 100;

    }
    printf("%f\n", average / N);

    return 0;
}