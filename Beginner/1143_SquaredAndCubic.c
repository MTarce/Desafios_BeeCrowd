#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int cont = 1; cont <= n; cont++)
    {
        printf("%d %d %d\n", cont, cont * cont, cont * cont * cont);
    }

    return 0;
}
