

/*===========================================

Input
7

OUTPUT
1 2 3 PUM
5 6 7 PUM
9 10 11 PUM
13 14 15 PUM
17 18 19 PUM
21 22 23 PUM
25 26 27 PUM
=============================================*/


#include <stdio.h>
 
int main() 
{
    int n,cont=1;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
         printf("%d ",cont);
         cont++;
        }
        cont+=1;
        
        printf("PUM\n");

        
    }
    
    return 0;
}