#include <stdio.h>
 
int main() 
{
    float n[6];
    float sumMed = 0;
    int cont=0;

    for ( int i = 0; i < 6; i++)
    {
        
        scanf("%f",&n[i]);
        if(n[i] > 0)
        {
            cont++;
            sumMed = sumMed + n[i];
        }
        
    }
    printf("%d valores positivos\n",cont);
    printf("%.1f\n", sumMed/cont);
    
    
    return 0;
}