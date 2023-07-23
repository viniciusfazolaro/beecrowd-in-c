#include<stdio.h>
#define TAM 1000

void inicializarVetor(int max, int numeros[]);

void imprimirVetor(int numeros[]);

int main(){

    // declaração de variáveis

    int max, numeros[TAM];

    // entrada

    scanf("%d", &max);

    inicializarVetor(max, numeros);
    imprimirVetor(numeros);

    return 0;
}

void inicializarVetor(int max, int numeros[]){

    int i;

    for(i = 0; i < TAM; i++){

        numeros[i] = i % max;

    }
}

void imprimirVetor(int numeros[]){

    int i;

    for(i = 0; i < TAM; i++){

        printf("N[%d] = %d\n", i, numeros[i]);
    }
}