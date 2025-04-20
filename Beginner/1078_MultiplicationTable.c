#include <stdio.h>
 
int main() 
{
    int n;
    scanf("%d",&n);
    for (size_t i = 1; i <= 10; i++)
    {
        int table = i*n;
        printf("%d x %d = %d\n",i,n,table); 
    }
    

 
    return 0;
}