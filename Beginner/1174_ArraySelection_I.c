/*================================
--> Imprimir as posições e o valor contido
para o valores menores ou iguais a 10.asm


input:
0
-5
63
-8.5
...


Outup:
A[0] = 0.0
A[1] = -5.0
A[3] = -8.5
...

==================================*/

#include <stdio.h>

int main()
{
    float A[100];

    for (int i = 0; i < 100; i++)
    {
        scanf("%f", &A[i]);
    }

    for (int i = 0; i < 100; i++)
    {
        if (A[i] <= 10)
        {
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}