#include<stdio.h>

void verificarmultiplo(int A, int B);

int main(){

    // declaração de variáveis

    int A, B;

    // entrada

    scanf("%d %d", &A, &B);

    // processamento

    verificarmultiplo(A, B);

    return 0;
}

void verificarmultiplo(int A, int B){
    if(B % A == 0 || A % B == 0){
        printf("Sao Multiplos\n");
    } else{
        printf("Nao sao Multiplos\n");
    }
}