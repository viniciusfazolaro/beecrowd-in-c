#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIN 12
#define COL 12

void calcularMatriz(char T, int coluna);

int main(){

    // declaração de variáveis

    int coluna;
    char T = 'A';

    // entrada

    scanf("%d %c", &coluna, &T);
    
    // processamento

    calcularMatriz(T, coluna);

    return 0;
}

void calcularMatriz(char T, int coluna){

    T = toupper(T);

    int i, j;
    double M[LIN][COL], operacao = 0;
    
    for(i = 0; i < LIN; i++){

        for(j = 0; j < COL; j++){

            scanf("%lf", &M[i][j]);

        }
    }

    for(i = 0; i < LIN; i++){

        operacao += M[i][coluna];

    }

    if((T == 'M')){

        operacao /= LIN;

    }

    printf("%.1lf\n", operacao);
}