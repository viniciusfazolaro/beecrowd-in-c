#include<stdio.h>

void maioreposicao();

int main(){

    // processamento

    maioreposicao();

    return 0;
}

void maioreposicao(){

    // declaração de variáveis

    int valores[100], i = 0, maior = 0, posicao = 0;

    
    while(i < 100){
        scanf("%d", &valores[i]);

        if(valores[i] > maior){
            maior = valores[i];
            posicao = i;
        }

        i++;
    }
    posicao++;
    printf("%d\n%d\n", maior, posicao);
}