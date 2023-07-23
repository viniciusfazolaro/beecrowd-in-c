#include<stdio.h>

int somar(int A, int B);

int main(){
    //declaração de variáveis
    int A, B, X;

    // entrada dos dados
    scanf("%d %d", &A, &B);
    
    //Chamada da função (processamento)
    X = somar(A, B);

    printf("X = %d\n", X);

    return 0;
}

int somar(int A, int B){
    return A + B;
}