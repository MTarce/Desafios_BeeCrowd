#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;

    int a = 0,b = 1, fibo;

    if(n >= 1)
        printf("%d",a);
    if(n >= 2)
        printf(" %d",b);

    for (i = 2; i < n; i++)
    {
        fibo = a+b;
        printf(" %d",fibo);
        a = b;
        b = fibo;
    }
    printf("\n");

    return 0;
}