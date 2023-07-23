#include<stdio.h>

void dividirXY(int qtde);

int main(){

    // declaração de variáveis

    int qtde;

    // entrada

    scanf("%d", &qtde);

    // processamento

    dividirXY(qtde);

    return 0;
}

void dividirXY(int qtde){

    int i, x, y;
    double divisao;
    
    for(i = 0; i < qtde; i++){

        scanf("%d %d", &x, &y);

        if(y == 0){
            printf("divisao impossivel\n");
        } else{
            divisao = (double)x / (double)y;
            printf("%.1lf\n", divisao);
        }
    }
}