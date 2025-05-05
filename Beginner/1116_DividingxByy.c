#include <stdio.h>

int n, x, y;
int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);
        if (y == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            float division = (float)x / y;
            printf("%.1f\n", division);
        }

        
    }

    return 0;
}