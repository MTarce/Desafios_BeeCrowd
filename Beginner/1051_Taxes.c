#include <stdio.h>

/*
A melhor forma de fazer isso é indo de baixo para cima.
*/
 
int main() 
{
    float salary,taxTot = 0;
    scanf("%f", &salary);

    if(salary <= 2000.00)
    {
        //Sem taxa
        printf("Isento\n");
    }
    else
    {
        if(salary > 4500.00)
        {
            taxTot += (salary - 4500.00)* 0.28;
            salary = 4500.00;
        }
        if(salary > 3000.00)
        {
            taxTot += (salary - 3000.00)* 0.18;
            salary = 3000.00;
        }
        if(salary > 3000.00)
        {
            taxTot += (salary - 3000.00)* 0.18;
            salary = 3000.00;
        }
        if(salary > 2000.00)
        {
            taxTot += (salary - 2000.00)* 0.08;
        }
        printf("R$ %.2f\n",taxTot);

    }
   
    return 0;
}