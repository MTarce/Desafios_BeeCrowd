#include <stdio.h>
#include <string.h>
 /*
 Objetivo: calcular a duração do evento em segundos
 Line01 -  "Dia xx"
 Line02 -  08 : 12 : 23
 Lin203 e 04 - No mesmo formato,porem para fim do evento
 */

 /*
 caso null ---> 
W=0 dia(s)
X=0 hora(s)
Y=0 minuto(s)
Z=0 segundo(s)
 */
#include <stdio.h>
#include <string.h>

/*
Objetivo: calcular a duração do evento em segundos
Entrada:
Linha 01 -  "Dia xx"
Linha 02 -  hh : mm : ss
Linha 03 -  "Dia xx"
Linha 04 -  hh : mm : ss
Saída:
W=dia(s), X=hora(s), Y=minuto(s), Z=segundo(s)
*/

char linha1[20];
char linha2[20];
char linha3[20];
char linha4[20];
int h1, m1, s1, h2, m2, s2;
int initDia, endDia;

int main() 
{
    // Leitura das entradas
    fgets(linha1, sizeof(linha1), stdin);
    sscanf(linha1, "Dia %d", &initDia);

    fgets(linha2, sizeof(linha2), stdin);
    sscanf(linha2, "%d : %d : %d", &h1, &m1, &s1);

    fgets(linha3, sizeof(linha3), stdin);
    sscanf(linha3, "Dia %d", &endDia);

    fgets(linha4, sizeof(linha4), stdin);
    sscanf(linha4, "%d : %d : %d", &h2, &m2, &s2);

    // Converter tudo para segundos
    int tempoInicial = initDia * 24 * 3600 + h1 * 3600 + m1 * 60 + s1;
    int tempoFinal   = endDia * 24 * 3600 + h2 * 3600 + m2 * 60 + s2;

    int duracao = tempoFinal - tempoInicial;

    int dias = duracao / (24 * 3600);
    duracao %= (24 * 3600);
    int horas = duracao / 3600;
    duracao %= 3600;
    int minutos = duracao / 60;
    int segundos = duracao % 60;

    // Saída formatada
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
