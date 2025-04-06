/*
Read a value of floating point with two decimal places. 
This represents a monetary value. After this, calculate
the smallest possible number of notes and coins on which 
the value can be decomposed. The considered notes are of 
100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 
0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed 
by the list of notes and the message “MOEDAS:” followed by the list of coins.
*/


#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    int total = (int)(N * 100 + 0.5); // Arredonda para o centavo mais próximo

    int nota100 = total / 10000; total %= 10000;
    int nota50  = total / 5000;  total %= 5000;
    int nota20  = total / 2000;  total %= 2000;
    int nota10  = total / 1000;  total %= 1000;
    int nota5   = total / 500;   total %= 500;
    int nota2   = total / 200;   total %= 200;

    int moeda1  = total / 100;   total %= 100;
    int moeda05 = total / 50;    total %= 50;
    int moeda025= total / 25;    total %= 25;
    int moeda010= total / 10;    total %= 10;
    int moeda005= total / 5;     total %= 5;
    int moeda001= total;         // o que sobrou é 0.01

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda05);
    printf("%d moeda(s) de R$ 0.25\n", moeda025);
    printf("%d moeda(s) de R$ 0.10\n", moeda010);
    printf("%d moeda(s) de R$ 0.05\n", moeda005);
    printf("%d moeda(s) de R$ 0.01\n", moeda001);

    return 0;
}
