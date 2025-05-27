
/*==========================================
Opções: 

1.Alcohol
2.Gasoline
3.Diesel
4.End
============================================*/
int Alcohol = 0,
    Gasoline = 0,
    Diesel = 0;

#include <stdio.h>
int main() 
{
    int op;
    do
    {
        scanf("%d",&op);
        if(op >=1 && op <=3)
        {
            if(op == 1)
                Alcohol++;
            else if(op == 2)
                Gasoline++;
            else if(op == 3)
                Diesel++;
        }
    } while (op!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alcohol);
    printf("Gasolina: %d\n",Gasoline);
    printf("Diesel: %d\n",Diesel);

    
    return 0;
}