#include<stdio.h>
#define TAM 100

void inicializareImprimirVetor();

int main(){

    // processamento

    inicializareImprimirVetor();
    

    return 0;
}

void inicializareImprimirVetor(){

    double numero[TAM];
    int i;

    for(i = 0; i < TAM; i++){
        scanf("%lf", &numero[i]);
    }

    for(i = 0; i <  TAM; i++){
        if(numero[i] <= 10){
            printf("A[%d] = %.1lf\n", i, numero[i]);
        }
    }
}