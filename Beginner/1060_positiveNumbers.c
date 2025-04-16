#include <stdio.h>
 
int main()

{
    float n[6];
    int cont = 0;

    for ( int i = 0; i <= 5; i++)
    {
         scanf("%f",&n[i]);

         if(n[i]> 0)
         {
            cont+=1;
         }
    }
    printf("%d valores positivos\n",cont);

    return 0;
}