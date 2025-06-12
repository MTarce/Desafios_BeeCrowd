#include <stdio.h>

int main()
{
    int x, z;

    scanf("%d", &x);

    // garantir que z > x
    do {
        scanf("%d", &z);
    } while (z <= x);

    int sum = 0, cont = 0;
    for (int i = x; sum < z; i++) {
        sum += i;
        cont++;
    }

    printf("%d\n", cont);

    return 0;
}
