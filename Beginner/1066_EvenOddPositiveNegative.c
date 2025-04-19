#include <stdio.h>
 
int main() 
{
    int n[5];
    int contEven = 0;
    int contOdd = 0;
    int contPositive = 0;
    int contNegative = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d",&n[i]);

        if(n[i]%2==0){contEven++;}
        if(n[i]%2 != 0){contOdd++;}
        if(n[i] > 0){contPositive++;}
        if(n[i] < 0){contNegative++;}
    }
    printf("%d valor(es) par(es)\n",contEven);
    printf("%d valor(es) impar(es)\n",contOdd);
    printf("%d valor(es) positivo(s)\n",contPositive);
    printf("%d valor(es) negativo(s)\n",contNegative);

    

 
    return 0;
}