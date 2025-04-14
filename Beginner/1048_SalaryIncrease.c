#include <stdio.h>
 
int main() 
{
    float salary, newSalary, moneyEarned;

    scanf("%f", &salary);

    if(salary > 0.0 && salary <= 400.00)
    {
        //Ajuste de 15%
        newSalary = salary + salary*0.15;
        moneyEarned = salary*0.15;
        printf("Novo salario: %.2f\n", newSalary);
        printf("Reajuste ganho: %.2f\n", moneyEarned);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary > 400.01 && salary <= 800.00)
    {
        //Ajuste de 12%
        newSalary = salary + salary*0.12;
        moneyEarned = salary*0.12;
        printf("Novo salario: %.2f\n", newSalary);
        printf("Reajuste ganho: %.2f\n", moneyEarned);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary > 800.01 && salary <= 1200.00)
    {
         //Ajuste de 10%
         newSalary = salary + salary*0.10;
         moneyEarned = salary*0.10;
         printf("Novo salario: %.2f\n", newSalary);
         printf("Reajuste ganho: %.2f\n", moneyEarned);
         printf("Em percentual: 10 %%\n");
    }
    else if(salary > 1200.01 && salary <= 2000.00)
    {
        //Ajuste de 7%
        newSalary = salary + salary*0.07;
        moneyEarned = salary*0.07;
        printf("Novo salario: %.2f\n", newSalary);
        printf("Reajuste ganho: %.2f\n", moneyEarned);
        printf("Em percentual: 7 %%\n");
   }
    else
    {
        //Ajuste de 4%
        newSalary = salary + salary*0.04;
        moneyEarned = salary*0.04;
        printf("Novo salario: %.2f\n", newSalary);
        printf("Reajuste ganho: %.2f\n", moneyEarned);
        printf("Em percentual: 4 %%\n");

    }
    return 0;
}