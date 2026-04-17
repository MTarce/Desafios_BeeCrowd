#include <stdio.h>

int main(){
    //Declando e lendo o tamano do array
    int N;
    scanf("%d", &N);
    // Restrição
    if(N> 1 && N<1000){
        int X[N];
        //Lendo e adicionado no array
        for (int i = 0; i < N; i++){
            scanf("%d", &X[i]);
        }
        //Variavel referencia "menor" e "posição"
        //int menor = 1000e3;
        int menor = X[0];
        int position = 0;
        //Verificando cada valor nos indices do array
        for (int i = 0; i < N; i++)
        {
            if(X[i] < menor ){
                menor = X[i];
                position = i;
            }
        }
        printf("Menor valor: %d\n",menor);
        printf("Posicao: %d\n", position);        
    }

    return 0;
}

/*----------------------------------------------------
#include <stdio.h>
 
int main() {

    int N;
    scanf("%d",&N);

    int X[N];

    int *p = NULL;
    p = X;
    // pointer prt aponta para o endereço de p == &X[0]
    // p é o ponteiro para o array.
    //ptr++ indica que estou caminhando na memoria.
    for (int *ptr = p; ptr < p+N; ptr++)
    {
        scanf("%d",ptr);
    }

    int *ptr = p; // ponteira que vai varrer meu array.
    int menor = *p; // menor recebe meu primeiro elemento de p
    int *pos = p;

    while (ptr < p+N)
    {
        if (*ptr < menor)
        {
            menor = *ptr;
            pos = ptr;
        }
        ptr++;
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %ld\n", pos - p); // diferença de ponteiros
    return 0;
}
*/