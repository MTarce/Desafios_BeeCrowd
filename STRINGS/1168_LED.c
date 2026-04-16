#include <stdio.h>

/*
1 --> 2
2 --> 5
3 --> 5
4 --> 4
5 --> 5
6 --> 6
7 --> 3
8 --> 7
9 --> 6
10 -> 6

*/

int main(){
    int N;
    char v[100];

    scanf("%d",&N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s",v);
        int leds=0;
        for (int i = 0; v[i]!='\0'; i++)
        {
            if(v[i] == '1'){
                leds+=2;
            }
            if ((v[i] == '2') || (v[i] == '3') || (v[i] == '5') )
            {
                leds+= 5;
            }

            if (v[i] == '4')
            {
                leds+= 4;
            }

            if ((v[i] == '6') || (v[i] == '9') || (v[i] == '0'))
            {
                leds+= 6;
            }

            if (v[i] == '7')
            {
                leds+= 3;
            }

            if (v[i] == '8')
            {
                leds+= 7;
            }
            
        }
        printf("%d leds\n",leds);
        
    }

    return 0;
}


/*Alternativa com ponteiros*/

/*=============================
char *p = v;

while (*p != '\0') {
    if (*p == '5') break;
    p++;
}
================================*/