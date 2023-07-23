#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIN 12
#define COL 12

void calcularMatriz(char T, int linha);

int main(){

    // declaração de variáveis

    int linha;
    char T = 'A';

    // entrada

    scanf("%d %c", &linha, &T);

    // processamento

    calcularMatriz(T, linha);

    return 0;
}

void calcularMatriz(char T, int linha){

    T = toupper(T);

    int i, j;
    double M[LIN][COL], operacao = 0;

    for(i = 0; i < LIN; i++){

        for(j = 0; j < COL; j++){

            scanf("%lf", &M[i][j]);

        }
    }

    for(j = 0; j < COL; j++){

        operacao += M[linha][j];

    }

    if(T == 'M'){

        operacao /= COL;

    }

    printf("%.1lf\n", operacao);

}