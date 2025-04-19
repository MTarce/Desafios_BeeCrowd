#include <stdio.h>
 
int main() 
{
    int x,y,sum;
    scanf("%d%d",&x,&y);

    if(x < y)
    {
        sum = 0;
        for (int i = x+1; i < y; i++)
        {
            if(i%2 !=0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n",sum);
    }

    else if(x > y)
    {
        sum = 0;
        for (int i = x-1; i > y; i--)
        {
            if(i%2 !=0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n",sum);
    }

    else if (x=y)
    {
        printf("%d\n",sum = 0);
    }
    //printf("%d\n%d\n",x,y);

    return 0;
}