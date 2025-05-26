#include <stdio.h>
#include <stdlib.h>

int main()
{
    // NI = Numero de gols do inter
    // NG = Numero de gols do gremio

    int NI, NG;
    int op,
        quant_Gremais = 0,
        Win_inter = 0,
        Win_gremio = 0,
        Empates = 0;
    do
    {
        scanf("%d%d", &NI, &NG);
        quant_Gremais++;
        if (NI > NG)
            Win_inter++;
        else if (NI < NG)
            Win_gremio++;
        else
            Empates++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
        if (op == 2)
        {
            printf("%d grenais\n", quant_Gremais);
            printf("Inter:%d\n", Win_inter);
            printf("Gremio:%d\n", Win_gremio);
            printf("Empates:%d\n", Empates);

            if (Win_inter > Win_gremio)
                printf("Inter venceu mais\n");
            else if (Win_gremio > Win_inter)
                printf("Gremio venceu mais\n");
            else
                printf("Nao houve vencendor\n");
        }

    } while (op != 2);

    return 0;
}