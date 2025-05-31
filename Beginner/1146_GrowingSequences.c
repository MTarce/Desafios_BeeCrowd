#include <stdio.h>

int main()
{
    int x;
    do
    {
        scanf("%d", &x);
        if (x != 0)
        {
            for (int i = 1; i <= x; i++)
            {
                printf("%d", i);
                if (i <= x - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }

    } while (x != 0);

    return 0;
}