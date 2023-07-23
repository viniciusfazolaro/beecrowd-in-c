#include<stdio.h>

int calcularcondicoes(int A, int B, int C, int D);

int main(){

    // declaração de variáveis

    int A, B, C, D, condicoes;

    // entrada

    scanf("%d %d %d %d", &A, &B, &C, &D);

    // processamento

    condicoes = calcularcondicoes(A, B, C, D);    

    return 0;
}

// saída
int calcularcondicoes(int A, int B, int C, int D){
    if((B > C) && (D > A) && (C + D > A + B) && (C&&D > 0) && (A % 2 == 0)){
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }
}