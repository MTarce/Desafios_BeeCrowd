// VERSÃO 01
/*
#include <stdio.h>
int n1,n2,n3,N1,N2,N3,temp;


int main() 
{

    scanf("%d %d %d", &n1,&n2,&n3);

    N1 = n1;
    N2 = n2;
    N3 = n3;

    if(n1 > n2){temp = n1; n1=n2; n2=temp;}
    if(n1 > n3){temp = n1; n1=n3; n3=temp;}
    if(n2 > n3){temp = n2; n2=n3; n3 = temp;}

    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    putchar('\n');
    printf("%d\n",N1);
    printf("%d\n",N2);
    printf("%d\n",N3);
    return 0;
}

*/

// VERSÃO 02
#include <stdio.h>

int main ()
{
    int n,temp;
    scanf("%d", &n);

    int valores[n];

    for (int i = 0; i<n;i++)
    {
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i <n-1; i++){
        for (int j = 0; j < n-1-i; j++){
            if(valores[j] > valores[j+1]){
                temp = valores[j];
                valores[j] = valores[j+1];
                valores[j+1] = temp;
            }
        }
    }

    for (int j = 0; j<n;j++)
    {
        printf("%d ",valores[j]);
    }

    return 0;
}

