#include <stdio.h>

/*
* 1 - Ler um numero que é uma linha da matriz. 
* 2 - Ler um Caracter Maiusculo que indica a operação a ser realizada (SOMA OU MEDIA na linha.
* 3 - Ler todos os elementos de uma matriz M[12][12]

*   Constraints: 
*       Inteiro L (L>= 0 && L<=11)
*       UpperCase Character T ('S' or 'M')
*       Inserir os elementos sempre da esquerda para direita.       
*/
int main(){
    int L;
    char T;
    float M[12][12];
    float SOMA = 0.0, MEDIA;
    
    scanf("%d", &L); //Leitura da minha linha da matriz.
    scanf(" %c", &T);

    if(L>= 0 && L<=11) // Verificando a restrição.
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                scanf("%f", &M[i][j]);

                if((i == L) && ((T == 'S') || (T == 'M'))){
                    SOMA = SOMA + M[i][j];

                    if(T == 'M'){
                        MEDIA = SOMA/12;
                    }
                }
            }
        }
        if(T == 'S')
            printf("%.1f\n",SOMA);
        else if (T == 'M')
        {
            printf("%.1f\n",MEDIA);
        }
        
        
    }
    
    return 0;
}

    