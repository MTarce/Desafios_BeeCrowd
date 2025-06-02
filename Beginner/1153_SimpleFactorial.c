#include <stdio.h>
 
int main() 
{

    int n, fact, factorial = 0, prod =1;

    scanf("%d",&n);

    for (int i = 1; i < n-1; i++)
    {
        /*Percorre os produtos de 1 a n-1*/
        fact = (n - i);
        /*Para armazenar os produtos no fim do for()*/
        prod = prod * fact; 
    }
    factorial = n * prod; 
    printf("%d\n", factorial);
    return 0;
}