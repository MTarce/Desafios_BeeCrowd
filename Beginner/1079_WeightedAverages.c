#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    float medias[N]; // Vetor para armazenar as médias

    for (int i = 0; i < N; i++) {
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);

        medias[i] = (a * 2 + b * 3 + c * 5) / 10.0;
    }

    // Agora imprime todas as médias
    for (int i = 0; i < N; i++) {
        printf("%.1f\n", medias[i]);
    }

    return 0;
}
