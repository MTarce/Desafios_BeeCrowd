#include <stdio.h>
 
int main() 
{
    int n[5];
    int cont = 0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);

        if(n[i]%2 == 0)
        {
            cont++;
        }
    }
    printf("%d valores pares\n",cont);


 
    return 0;
}