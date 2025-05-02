#include <stdio.h>

int main()
{
    int M, N;
    

    do
    {
        scanf("%d %d", &M, &N);
        if(M<=0 || N <=0){
            break;
        }

        else if (M > N)
        {
            int sum = 0;
            for (size_t i = N; i <= M; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }
        else
        {
            int sum = 0;
            for (size_t i = M; i <= N; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("Sum=%d\n", sum);
        }

    } while (1);
    return 0;
}