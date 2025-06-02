#include <stdio.h>
 
int main() 
{
    float s,soma = 1.0, i = 2.0;

    for (int j = 3; j <=39; j++)
    {
        if(j%2 != 0)
        {
            s = (float)j/(i);
            i = i*2;
            soma = soma + s;
        }
    }
    printf("%.2f\n",soma);

    return 0;
}