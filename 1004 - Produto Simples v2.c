#include<stdio.h>

int multiplicar(int A, int B);

int main(){
    // declaração de variáveis
    int A, B, PROD;

    // entrada
    scanf("%d %d", &A, &B);

    // processamento
    PROD = multiplicar(A, B);

    //saída
    printf("PROD = %d\n", PROD);

    return 0;
}

int multiplicar(int A, int B){
    return A * B;
}