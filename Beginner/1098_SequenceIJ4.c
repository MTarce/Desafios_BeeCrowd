#include <stdio.h>

int main()
{
    int i;
    float I, J;

    for (i = 0; i <= 10; i++) // de 0 até 10 (0.0 até 2.0)
    {
        I = i * 0.2;
        for (int j = 1; j <= 3; j++)
        {
            J = j + I;

            if (i == 0 || i == 5 || i == 10) // i=0 (I=0.0), i=5 (I=1.0), i=10 (I=2.0)
            {
                printf("I=%.0f J=%.0f\n", I, J);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", I, J);
            }
        }
    }

    return 0;
}
