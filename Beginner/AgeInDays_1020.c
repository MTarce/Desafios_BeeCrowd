
/*============================================
A partir da quantidades de dias correspondente a 
idade de uma pessoa, é retornado quantidade de anos:meses:dias
==============================================*/
#include <stdio.h>

int dias,ano,restoAno,mes,restoMes;

int main() 
{
    scanf("%d",&dias);

    ano = dias/365;
    restoAno = dias%365;
    mes = restoAno/30;
    restoMes = restoAno%30;

    printf("%d ano (s)\n", ano);
    printf("%d mes (es)\n", mes);
    printf("%d dia (s)\n",restoMes);
    return 0;
}