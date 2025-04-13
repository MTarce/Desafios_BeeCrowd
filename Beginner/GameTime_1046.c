#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n1,n2,duration;

int main() 
{
    scanf("%d %d",&n1,&n2);
    if(n1 < n2)
    {
        // Nem precisava de abs() Fim - inicio
        int mod = abs(n1-n2);
        printf("O JOGO DUROU %d HORA(S)\n",mod); 
    }
    else{
        int mod = abs(n1-n2);
        duration = 24 - mod;
        printf("O JOGO DUROU %d HORA(S)\n",duration); 
    }
    return 0;
}