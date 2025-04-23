#include <stdio.h>


/*
Animais: 
frogs,rats and rabbits


porcentagem em relação ao total  = (total de coelhos / total)*100


*/

int n,
    quant,
    sumC=0,
    sumR=0,
    sumS=0;

char type ;


int main() 
{
    scanf("%d",&n);

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d %c",&quant,&type);
        if(type == 'C')
        {
            sumC +=quant;
        }
        else if(type == 'R')
        {
            sumR += quant;
        }
        else if(type == 'S')
        {
            sumS += quant;
        }
    }
    printf("Total: %d cobaias\n", sumC+sumR+sumS);
    printf("Total de coelhos: %d\n",sumC);
    printf("Total de ratos: %d\n",sumR);
    printf("Total de sapos: %d\n",sumS);
    printf("Percentual de coelhos: %.2f %%\n", ((double)sumC/(sumC+sumR+sumS))*100);
    printf("Percentual de ratos: %.2f %%\n", ((double)sumR/(sumC+sumR+sumS))*100);
    printf("Percentual de sapos: %.2f %%\n",((double)sumS/(sumC+sumR+sumS))*100);

    return 0;
}