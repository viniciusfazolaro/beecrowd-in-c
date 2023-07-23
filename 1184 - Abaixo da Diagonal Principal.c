#include<stdio.h>
#include<ctype.h>
#define LIN 12
#define COL 12

void calcularDiagonalAbaixo(char O);

int main(){

    // declaração de variáveis

    char O = 'A';

    // entrada

    scanf("%c", &O);

    // processamento

    calcularDiagonalAbaixo(O);

    return 0;
}

void calcularDiagonalAbaixo(char O){

    O = toupper(O);

    int i, j;
    double operacao, M[LIN][COL];

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){

            scanf("%lf", &M[i][j]);
        }
    }

    for(i = 1; i < LIN; i++){
        for(j = 0; j < i; j++){
            operacao += M[i][j];
        }
    }

    if(O == 'M'){
        operacao /= 66;
    }

    printf("%.1lf\n", operacao);
}