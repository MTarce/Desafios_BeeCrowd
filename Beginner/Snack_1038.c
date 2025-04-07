#include <stdio.h>
 /*
 x: codigo do produto
 y: Quantia do item
 */


int x,y;
float total;

int main() 
{
    scanf("%d %d",&x, &y);

    switch (x)
    {
    case 1:
        total = y*4.00;
        printf("Total: R$ %.2f\n", total);
        break;
    case 2:
        total = y*4.50;
        printf("Total: R$ %.2f\n", total);
        break;
    case 3:
        total = y*5.00;
        printf("Total: R$ %.2f\n", total);
        break;
    case 4:
        total = y*2.00;
        printf("Total: R$ %.2f\n", total);
        break;
    case 5:
        total = y*1.50;
        printf("Total: R$ %.2f\n", total);
        break;
    default:
        break;
    }

    return 0;
}