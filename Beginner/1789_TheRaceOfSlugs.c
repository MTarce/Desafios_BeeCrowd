#include <stdio.h>

/*
 *   Level 1: If speed is less than 10 cm/h.
 *   Level 2: If speed is greater than or equal to 10 cm/h and lower than 20 cm/h.
 *   Level 3: If speed is greater than or equal to 20 cm/h.
 */

int main()
{

    int L;
    int fast = 0;
    int aux;
    // int Vi[L];
    while ((scanf("%d", &L)) != EOF)
    {
        int Vi[L];
        for (int i = 0; i < L; i++)
        {
            scanf("%d", &Vi[i]);
        }

        fast = Vi[0];
        for (int i = 0; i < L; i++)
        {
            if (Vi[i] >= fast)
            {
                fast = Vi[i];
            }
        }

        if (fast < 10)
        {
            printf("1\n");
        }
        else if ((fast >= 10) && (fast < 20))
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}