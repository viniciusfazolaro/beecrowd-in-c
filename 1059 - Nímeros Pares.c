#include<stdio.h>

void imprimirPares(int numero);

int main(){

    // declaração de variáveis

    int numero;

    // processamento

    imprimirPares(2);

    return 0;
}

void imprimirPares(int numero){

    while(numero <= 100){
        printf("%d\n", numero);

        numero += 2;
    }
}