#include <stdio.h>

/*
* 1 - Ler um numero que é uma COLUNA (C) da matriz. 
* 2 - Ler um Caracter Maiusculo que indica a operação a ser realizada (SOMA OU MEDIA) na linha.
* 3 - Ler todos os elementos de uma matriz M[12][12]

*   Constraints: 
*       Inteiro L (L>= 0 && L<=11)
*       UpperCase Character T ('S' or 'M')
*       Inserir os elementos sempre da esquerda para direita.       
*/
int main(){
    int C;
    char T;
    float M[12][12];
    float SOMA = 0.0;
    
    scanf("%d", &C); //Leitura da minha coluna da matriz.
    scanf(" %c", &T); //Leitura da letra para o operação 

    if(C>= 0 && C<=11) // Verificando a restrição.
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                scanf("%f", &M[i][j]);

                if((j == C) && ((T == 'S') || (T == 'M'))){
                    SOMA = SOMA + M[i][j];
                }
            }
        }
        if(T == 'S')
            printf("%.1f\n",SOMA);
        else if (T == 'M')
        {
            printf("%.1f\n",SOMA/12);
        }
    }
    
    return 0;
}

    