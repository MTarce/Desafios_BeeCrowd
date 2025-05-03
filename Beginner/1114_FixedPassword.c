#include <stdio.h>
 
int main()
{
    int n;
    do
    {
        scanf("%d",&n);
        if(n == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }

    } while (1);
    
 
 
    return 0;
}