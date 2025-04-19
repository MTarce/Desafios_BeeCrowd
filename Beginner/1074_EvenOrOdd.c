#include <stdio.h>
 
int main() 
{
    int n;
    scanf("%d",&n);

    int numbers[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&numbers[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if(numbers[i] % 2 ==0 && numbers[i] > 0){printf("EVEN POSITIVE\n");}
        if(numbers[i] % 2 ==0 && numbers[i] < 0){printf("EVEN NEGATIVE\n");}
        if(numbers[i] % 2 !=0 && numbers[i] > 0){printf("ODD POSITIVE\n");}
        if(numbers[i] % 2 !=0 && numbers[i] < 0){printf("ODD NEGATIVE\n");}
        if(numbers[i] == 0){printf("NULL\n");}
    }
    
 
    return 0;
}