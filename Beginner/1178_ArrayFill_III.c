#include <stdio.h>
 
int main()
{
    int indice = 100;
    double X;
    double N[indice];

    scanf("%lf", &X);

    for (int i = 0; i < indice; i++)
    {
        N[i] = X;
        printf("N[%d] = %.4lf\n",i,N[i]);
        X = X/2;
    }

    return 0;
}