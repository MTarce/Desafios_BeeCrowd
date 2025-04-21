#include <stdio.h>
 
int main() 
{
    int n;

    int maior = 0,indice=0;
    for (size_t i = 0; i < 100; i++)
    {
        scanf("%d", &n);
        if(n > maior)
        {
            maior = n;
            indice = i+1;
        }
    }
    printf("%d\n%d\n",maior, indice);

    return 0;
}