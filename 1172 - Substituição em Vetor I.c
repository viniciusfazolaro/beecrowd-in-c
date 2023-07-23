#include<stdio.h>
#define TAM 10

void imprimirVetor();

int main(){

    // processamento

    imprimirVetor();

    return 0;
}

void imprimirVetor(){

    int numeros[TAM], i, posicao = 0;

    for(i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);

        if(numeros[i] > 0){
            printf("X[%d] = %d\n", posicao, numeros[i]);
        } else{
            printf("X[%d] = 1\n", posicao);
        }
        posicao++;
    }
}