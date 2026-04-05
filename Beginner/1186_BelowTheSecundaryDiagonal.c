#include <stdio.h>

/*
 * 1 - Ler um Caracter Maiusculo (O) que indica a operação a ser realizada (SOMA OU MEDIA) na matriz.
 * 2 - Calcular a soma('S') ou Media('M') dos valores ACIMA da diagonal secundária
 *
 */
int main()
{
    char O;
    float M[12][12];
    float SOMA = 0.0;
    int counter = 0;

    scanf(" %c", &O); // Leitura da letra para o operação

    // Para preecnher a matriz
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &M[i][j]);
            if(i+j > 12-1){ // Caracteristica de uma diagonal secundaria abaixo (i+j > N-1).
                SOMA+=M[i][j];
                counter++;
            }
        }
    }

    if (O == 'S')
        printf("%.1f\n", SOMA);
    else if (O == 'M')
    {
        printf("%.1f\n", SOMA / counter); // Numero de elementos  em 12x12
    }

    return 0;
}
