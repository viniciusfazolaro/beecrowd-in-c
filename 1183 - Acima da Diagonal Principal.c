#include<stdio.h>
#include<ctype.h>
#define LIN 12
#define COL 12

void calcularDiagonal(char T);

int main(){

    // declaração de variáveis

    char T = 'A';

    // entrada

    scanf("%c", &T);

    calcularDiagonal(T);

    return 0;
}

void calcularDiagonal(char T){

    T = toupper(T);

    int i, j;
    double operacao, M[LIN][COL];

    for(i = 0; i < LIN; i++){

        for(j = 0; j < COL; j++){

            scanf("%lf", &M[i][j]);
        }
    }

    for(i = 0; i < LIN; i++){

        for(j = i + 1; j < COL; j++){
            operacao += M[i][j];
        }
    }

    if((T == 'M')){

        operacao /= 66;
    }

    printf("%.1lf\n", operacao);
}