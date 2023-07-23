#include<stdio.h>
#include<ctype.h>
#define LIN 12
#define COL 12

void calcularDiagonalAcima(char O);

int main(){

    // declaração de variáveis

    char O = 'A';

    // entrada

    scanf("%c", &O);

    // processamento

    calcularDiagonalAcima(O);

    return 0;
}

void calcularDiagonalAcima(char O){

    int i, j;
    double M[LIN][COL], operacao = 0;

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){

            scanf("%lf", &M[i][j]);
        }
    }

    for(i = 0; i <= 10; i++){
        for(j = 0; j <= 10 - i; j++){
            operacao += M[i][j];
        }
    }

    if(O == 'M'){
        operacao /= 66;
    }

    printf("%.1lf\n", operacao);
}