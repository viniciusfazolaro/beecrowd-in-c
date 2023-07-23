#include<stdio.h>

//protótipos
int somar(int A, int B);

int main(){
    //declaração de variáveis
    int A, B, SOMA;

    //entrada
    scanf("%d %d", &A, &B);

    //processamento
    SOMA = somar(A, B);

    //saida
    printf("SOMA = %d\n", SOMA);

    return 0;
}

int somar(int A, int B){
    return A + B;
}