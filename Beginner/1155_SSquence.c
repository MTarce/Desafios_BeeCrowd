#include <stdio.h>
 
int main() 
{
    double s,soma = 1.0;

    for (int i = 2; i <=100; i++)
    {
        s = 1.0/i;
        soma = soma + s;
    }
    printf("%.2f\n",soma);

    return 0;
}