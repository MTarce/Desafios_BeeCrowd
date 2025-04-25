#include <stdio.h>

int main() 
{
    int j = 60;
    int i = 1;
    while (j >= 0)
    {
        printf("I=%d  J=%d\n",i,j);
        j = j - 5;
        i = i + 3;
    }

    return 0;
}
