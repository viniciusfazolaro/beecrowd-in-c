#include<stdio.h>

int calcularDiferenca(int A, int B, int C, int D);

int main(){
    // declração de variáveis
    int A, B, C, D, DIFERENCA;

    // entrada
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // processamento
    DIFERENCA = calcularDiferenca(A, B,C, D);

    // saída
    printf("DIFERENCA = %d\n", DIFERENCA);

    return 0;
}

int calcularDiferenca(int A, int B, int C, int D){
    return (A * B - C * D);
}