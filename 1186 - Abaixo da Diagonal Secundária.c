#include<stdio.h>
#include<ctype.h>
#define LIN 12
#define COL 12

void calcularAbaixoDiagonalSecundaria(char O);

int main(){

    // declaração de variáveis

    char O = 'A';

    // entrada

    scanf("%c", &O);

    // processamento

    calcularAbaixoDiagonalSecundaria(O);

    return 0;
}

void calcularAbaixoDiagonalSecundaria(char O){

    O = toupper(O);

    int i, j;
    double M[LIN][COL], operacao;

    for(i = 0; i < LIN; i++){

        for(j = 0; j < COL; j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(i = 1; i <= LIN - 1; i++){
        for(j = COL - 1; j > 11 - i; j--){
            operacao += M[i][j];
        }
    }

    if(O == 'M'){
        operacao/= 66;
    }

    printf("%.1lf\n", operacao);
}