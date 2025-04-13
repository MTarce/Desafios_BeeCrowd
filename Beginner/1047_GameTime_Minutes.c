#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n1,n2,durationHours,durationMin, n1_min, n2_min;

int main() 
{
    scanf("%d %d %d %d",&n1,&n1_min,&n2,&n2_min);

    if( (n1 < n2) || (n1==n2 && n1_min < n2_min) )
    {
        durationHours = n2-n1;
        durationMin = n2_min - n1_min;
        if(durationMin < 0)
        {
            durationMin +=60;
            durationHours-= 1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durationHours, durationMin); 
    }
    else if ( (n1 == n2) && (n1_min == n2_min) )
    {
        durationHours = 24;
        durationMin = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durationHours, durationMin);
    }

    else{
        durationHours = 24 - n1 +n2;
        durationMin = n2_min - n1_min;
        if(durationMin < 0)
        {
            durationMin +=60;
            durationHours-= 1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durationHours, durationMin);
    }
    return 0;
}