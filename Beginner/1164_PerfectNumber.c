#include <stdio.h>

int main()
{
    int N, n;
    scanf("%d",&N);

    for (size_t i = 0; i < N; i++)
    {
        int cont = 0;
        scanf("%d", &n);
       
        for (int i = 1; i <= n; i++)
        {
            if (i!= n)
            {
                if (n % i == 0)
                {
                    cont = cont + i;
                }
            }
        }
        if(cont == n)
        {
            printf("%d eh perfeito\n",n);
        }
        else
        {
            printf("%d nao eh perfeito\n",n);
        }
        
        
    }

    return 0;
}