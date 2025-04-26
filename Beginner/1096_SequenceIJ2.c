#include <stdio.h>

int main()
{
    int i = 1;
    for (i; i <= 9; i += 2)
    {
        int j = 7;
        for (int aux = 0; aux < 3; aux++)
        {
            printf("I=%d J=%d\n", i,j);
            j--;
        }
    }

    return 0;
}
