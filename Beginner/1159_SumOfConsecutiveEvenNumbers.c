
/*==============================================

Lê um numero x até que x == 0;
Para cada x mostrar a soma dos 5 consecutivos pares
incluindo x, caso for par;

================================================*/

#include <stdio.h>

int main()
{
    // Variáveis para numero(x) e soma (sum)
    int x;

    while (1)
    {
        int sum = 0, cont = 0;
        scanf("%d", &x);
        if(x == 0)
            break;
        for (int i = x; i< 10000; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
                cont++;
                if (cont == 5)
                {
                    printf("%d\n", sum);
                }
            }

        }

        
    }

    return 0;
}