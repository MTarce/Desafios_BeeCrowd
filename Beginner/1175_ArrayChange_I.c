#include <stdio.h>
 
int main() 
{
    int indice = 20;
    int N[indice];

    for (int i = 0; i < indice; i++)
    {
        scanf("%d",&N[i]);
    }

    for (int i = 0; i < indice/2; i++)
    {
        int temp = N[i];
        N[i] = N[indice - 1 - i];
        N[indice - 1 - i] = temp;
    }
    
    for (int i = 0; i < indice; i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }
    
    

    return 0;
}