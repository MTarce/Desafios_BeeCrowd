#include <stdio.h>

int main()
{
    float score,sum=0;
    int count =0;
    for (;;)
    {
        scanf("%f", &score);
        if (score >= 0 && score <= 10)
        {
            sum = sum +score;
            count++;

            if (count == 2)
            {
                printf("media = %.2f\n", sum / 2);
            }  

        }
        else
        {
            printf("nota invalida\n");
        }
    }

    return 0;
}