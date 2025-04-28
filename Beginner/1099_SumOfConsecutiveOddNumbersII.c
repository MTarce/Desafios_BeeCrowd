#include <stdio.h>

int n, x, y;
int main()
{
    scanf("%d", &n);

    int sumOdd[n];

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        scanf("%d %d", &x, &y);

        if (x < y)
        {
            int j;
            for (j = x + 1; j < y; j++)
            {
                if (j % 2 != 0)
                {
                    sum = sum + j;
                }
            }
        }
        else if (x > y)
        {
            int j;
            for (j = x - 1; j > y; j--)
            {
                if (j % 2 != 0)
                {
                    sum = sum + j;
                }
            }
        }
        sumOdd[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", sumOdd[i]);
    }

    return 0;
}