#include <stdio.h>
 
int main() 
{
    int x,y;
    do
    {
        scanf("%d %d", &x,&y);
        if(x==y)
        {
            break;
        }
        else if(x > y)
        {
            printf("Decrescente\n");
        }
        else{
            printf("Crescente\n");
        }

    } while (1);
    
 
 
    return 0;
}