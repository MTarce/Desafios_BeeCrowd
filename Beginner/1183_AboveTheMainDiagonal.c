#include <stdio.h>

/*
 * 1 - Ler um Caracter Maiusculo (O) que indica a operação a ser realizada (SOMA OU MEDIA) na matriz.
 * 2 - Calcular a soma('S') ou Media('M') dos valores acima da diagonal principal
 *
 */
int main()
{
    char O;
    float M[12][12];
    float SOMA = 0.0;

    scanf(" %c", &O); // Leitura da letra para o operação

    // Para preecnher a matriz
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
        }
    }

    // Para verificar na matriz
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if ((O == 'S') || (O == 'M'))
            {
                if(j > i) // Em uma matriz para valores acima da diagonal principal;
                {
                    SOMA = SOMA + M[i][j];
                }
            }
        }           
    }

    if (O == 'S')
        printf("%.1f\n", SOMA);
    else if (O == 'M')
    {
        printf("%.1f\n", SOMA / 66); // Numero de elementos acima em 12x12
    }

    return 0;
}
