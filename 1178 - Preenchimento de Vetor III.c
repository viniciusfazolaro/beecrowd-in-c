#include<stdio.h>
#define TAM 100

void inicializarVetor(double numeros[], double inicio);

void imprimirVetor(double numeros[]);

int main(){

    // declaração de variáveis

    double numeros[TAM], inicio;

    // entrada

    scanf("%lf", &inicio);

    // processamento

    inicializarVetor(numeros, inicio);
    imprimirVetor(numeros);

    return 0;
}

void inicializarVetor(double numeros[], double inicio){

    int i;

    for(i = 0; i < TAM; i++){

        numeros[i] = inicio;

        inicio /= 2;
    }
}

void imprimirVetor(double numeros[]){

    int i;

    for(i = 0; i < TAM; i++){

        printf("N[%d] = %.4lf\n",i, numeros[i]);
    }
}