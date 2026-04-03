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