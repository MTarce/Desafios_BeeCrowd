#include <stdio.h>
 
int main() 
{

    int N, contIn=0,contOut=0;
    
    scanf("%d",&N);

    int numbers[N];

    for (size_t i = 0; i < N; i++)
    {
        scanf("%d",&numbers[i]);
        if(numbers[i] >=10 && numbers[i] <=20)
        {
            contIn++;
        }
        else{
            contOut++;
        }
    }
    printf("%d in\n",contIn);
    printf("%d out\n",contOut);
    

    return 0;
}