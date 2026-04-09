#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;

    while (1) {
        scanf("%d", &A);

        if (A == 0) break;

        scanf("%d %d", &B, &C);

        int areaCasa = A * B;
        double areaTotal = (areaCasa * 100.0) / C;

        int lado = (int) sqrt(areaTotal);

        printf("%d\n", lado);
    }

    return 0;
}