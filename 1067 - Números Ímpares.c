#include<stdio.h>

void verificarimpar(int numero);

int main(){

    // declaração de variáveis

    int numero = 0;

    // entrada

    scanf("%d", &numero);

    // processamento

    verificarimpar(numero);

    return 0;
}

void verificarimpar(int numero){
    
    int dividendo = 1;

    while (numero >= dividendo){
        if(dividendo % 2 != 0){
            printf("%d\n", dividendo);
        }
        dividendo++;
    }
}