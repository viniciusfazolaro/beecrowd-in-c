#include<stdio.h>
#define TAM 20

void imprimirVetor();

int main(){

    // processamento

    imprimirVetor();

    return 0;
}

void imprimirVetor(){

    int i, numero[TAM];

    for(i = TAM - 1; i >= 0; i--){

        scanf("%d", &numero[i]);

    }

    for(i = 0; i < TAM; i++){

        printf("N[%d] = %d\n", i, numero[i]);
    }
}