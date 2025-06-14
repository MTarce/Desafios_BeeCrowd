/*============================================
--> Um número é primo se ele for divisível somente
por 1 e por ele mesmo.
==============================================*/

#include <stdio.h>

int main() 
{
    int N, x;
    scanf("%d", &N); // Lê a quantidade de números

    for (int i = 0; i < N; i++) // Para cada número
    {
        scanf("%d", &x); // Lê o número a ser testado

        int ehPrimo = 1; // Começa assumindo que é primo

        if (x <= 1) {
            ehPrimo = 0; // 0 e 1 não são primos
        } else {
            for (int j = 2; j < x; j++) {
                if (x % j == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}
