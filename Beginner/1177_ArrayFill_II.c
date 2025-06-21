#include <stdio.h>

int main()
{
    // indice: Tamanho do vetor  
    // j: variavel para iniciar em 0 e verificar se chegou em T 
    // t: Numero T
    int indice = 1000, j = 0,t; 
    int N[indice];

    // Leitura de T
    scanf("%d", &t);
    //Imprimir os valores do vetor
    for (int i = 0; i < indice; i++)
    {
        N[i] = j;
        printf("N[%d] = %d\n",i,N[i]);
        j++;
        //verifica em j é T
        if(j == t)
        {
            j = 0;
        }
    }
    
    return 0;
}