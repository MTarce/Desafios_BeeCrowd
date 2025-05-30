#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i < y; i+=0)
    {
        for (int j = 0; j < x; j++)
        {
            printf("%d", i);
            i++;
            // Evitar espaço no ultimo numero
            if(j < x-1){
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}