#include <stdio.h>

int main()
{
    float score, sum = 0;
    int count = 0, op;

    for (;;)
    {
        scanf("%f", &score);
        if (score >= 0 && score <= 10)
        {
            sum += score;
            count++;

            if (count == 2)
            {
                printf("media = %.2f\n", sum / 2);
                
                do {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &op);
                } while (op != 1 && op != 2);

                if (op == 2)
                    break;

                // Reinicia para novo cálculo
                sum = 0;
                count = 0;
            }
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    return 0;
}
