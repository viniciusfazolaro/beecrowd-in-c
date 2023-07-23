#include<stdio.h>

void verificarintervalo(int qtdecasos);

int main(){

    // declaração de variáveis

    int qtdecasos;

    // entrada

    scanf("%d", &qtdecasos);

    // processamento

    verificarintervalo(qtdecasos);

    return 0;
}

void verificarintervalo(int qtdecasos){

    int min = 10, max = 20, casos = 0, numero, dentro = 0, fora = 0;

    while (casos < qtdecasos){
        
        scanf("%d", &numero);

        if(numero >= min && numero <= max){
            dentro++;
        } else{
            fora++;
        }

        casos++;
    }

    printf("%d in\n%d out\n", dentro, fora);
    
}