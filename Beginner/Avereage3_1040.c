#include <stdio.h>
 
float n1,n2,n3,n4,average;

//Pesos : 2,3,4 e 1

int main() 
{
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    average = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    printf("Media: %.1f\n",average);

    if(average >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(average >= 5.0 && average <= 6.9)
    {
        printf("Aluno em exame.\n");
        float ScoreExame,NewAverage;
        scanf("%f", &ScoreExame);
        printf("Nota do exame: %.1f\n",ScoreExame);
        NewAverage = (average + ScoreExame)/2.0;
        if(NewAverage >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", NewAverage);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", NewAverage);
        }
        
    }

    return 0;
}