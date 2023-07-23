#include<stdio.h>

void verificarresto(int N);

int main(){

    // declaração de variáveis

    int N;

    // entrada

    scanf("%d", &N);

    // processamento

    verificarresto(N);

    return 0;
}

void verificarresto(int N){

    int max = 10000, i = 0;

    while (i < max){
        
        if(i % N == 2){
            printf("%d\n", i);
        }

        i++;
    }
}