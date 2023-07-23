#include<stdio.h>

void calculartempodejogo(int inicio, int final);

int main(){

    // declaração de variáveis

    int inicio, final;

    // entrada

    scanf("%d %d", &inicio, &final);

    // processamento

    calculartempodejogo(inicio, final);

    return 0;
}

void calculartempodejogo(int inicio, int final){
    int imaior, fmaior;
    if( inicio == final){
        printf("O JOGO DUROU 24 HORA(S)\n");
    } else{
        if (inicio > final){
            imaior = 24 - inicio + final;
            printf("O JOGO DUROU %d HORA(S)\n", imaior);
        } else{
            if (inicio < final){
                fmaior = final - inicio;
                printf("O JOGO DUROU %d HORA(S)\n", fmaior);
            }
        }
    }
}