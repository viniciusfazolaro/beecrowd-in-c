#include<stdio.h>

void verificarMenorPosicao(int qtde);

int main(){

    // declaração de variáveis

    int qtde;

    // entrada

    scanf("%d", &qtde);

    verificarMenorPosicao(qtde);

    return 0;
}

void verificarMenorPosicao(int qtde){

    int i, valores[qtde], menor, posicao;

    scanf("%d", &valores[0]);

    menor = valores[0];

    for(i = 1; i < qtde; i++){
        scanf("%d", &valores[i]);

        if(valores[i] < menor){

            menor = valores[i];
            posicao = i;

        }
    }
    
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);

}