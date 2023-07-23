#include<stdio.h>

void calcularTaboada(int numero);

int main(){

    // declaração de variáveis

    int numero;

    // entrada

    scanf("%d", &numero);

    // processamento

    calcularTaboada(numero);

    return 0;
}

void calcularTaboada(int numero){

    int multiplo, resultado;

    while(multiplo < 10){

        resultado = (1 + multiplo++) * numero;

        printf("%d x %d = %d\n", multiplo, numero, resultado);
    }
}