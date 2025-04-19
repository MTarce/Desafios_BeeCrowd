#include <stdio.h>
 
int main() 
{
    int n,cont=0;

    scanf("%d",&n);

    while (cont < 6)
    {
        if(n%2!=0)
        {
            cont++;
            printf("%d\n",n);
        }
        n++;
    }
    
    return 0;
}