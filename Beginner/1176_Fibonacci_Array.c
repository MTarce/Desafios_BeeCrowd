#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t fibo, t, n;
    scanf("%llu", &t);

    for (uint64_t i = 0; i < t; i++)
    {
        scanf("%llu", &n);

        if (n == 0)
        {
            printf("Fib(0) = 0\n");
        }
        else if (n == 1)
        {
            printf("Fib(1) = 1\n");
        }
        else
        {
            uint64_t a = 0, b = 1;
            for (uint64_t j = 2; j <= n; j++)
            {
                fibo = a + b;
                a = b;
                b = fibo;
            }
            printf("Fib(%llu) = %llu\n", n, fibo);
        }
    }

    return 0;
}
