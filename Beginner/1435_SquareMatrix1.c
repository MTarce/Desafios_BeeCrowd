#include <stdio.h>

/*
*   1-Ler um inteiro N(N>=0 && N<=100) que corresponde a dimensão da matriz quadrada.
*   Construir de acordo com o exempplo:

  1

  1   1
  1   1

  1   1   1
  1   2   1
  1   1   1

  1   1   1   1
  1   2   2   1
  1   2   2   1
  1   1   1   1

  1   1   1   1   1
  1   2   2   2   1
  1   2   3   2   1
  1   2   2   2   1

*   2- Encerrar quando entrada = 0;
*/

#include <stdio.h>

int main()
{
    int N;

    while (scanf("%d", &N) && N != 0)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                int min = i;

                if (j < min) min = j;
                if (N - 1 - i < min) min = N - 1 - i;
                if (N - 1 - j < min) min = N - 1 - j;

                if (j == N - 1)
                    printf("%3d", min + 1);   // último sem espaço
                else
                    printf("%3d ", min + 1);  // com espaço
            }
            printf("\n");
        }

        printf("\n"); // linha em branco após a matriz
    }

    return 0;
}