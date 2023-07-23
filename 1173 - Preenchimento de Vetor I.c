#include<stdio.h>
#define TAM 10

void inicializarVetor(int numeros[0]);

void imprimirVetor(int numeros[]);

int main(){

    // declaração de variáveis

    int numeros[TAM];

    //entrada

    scanf("%d", &numeros[0]);

    // processamento

    inicializarVetor(numeros);
    imprimirVetor(numeros);
}

void inicializarVetor(int numeros[0]){

    int i;

    for(i = 1; i < TAM; i++){
        numeros[i] = numeros[i - 1] * 2;
    }
}

void imprimirVetor(int numeros[]){
    int i;

    for(i = 0; i < TAM; i++){
        printf("N[%d] = %d\n", i, numeros[i]);
    }
}