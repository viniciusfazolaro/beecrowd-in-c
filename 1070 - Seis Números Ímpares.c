#include<stdio.h>

void seisimpares(int numero);

int main(){

    // declaração de variáveis

    int numero;

    // entrada

    scanf("%d", &numero);

    // processamento

    seisimpares(numero);

    return 0;
}

void seisimpares(int numero){

    int qtdenumeros = 0;

    while (qtdenumeros < 6){
        if(numero % 2 != 0){
            qtdenumeros++;
            printf("%d\n", numero);
        }
        numero++;
    }
}