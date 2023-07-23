#include<stdio.h>

void localizarponto(double x, double y);

int main(){

    // declaração de variáveis

    double x, y;

    // entrada

    scanf("%lf %lf", &x, &y);

    // processamento

    localizarponto(x, y);

    return 0;
}

void localizarponto(double x, double y){

    if(x == 0 && y == 0){
        printf("Origem\n");
    } else {
        if (x == 0 && y != 0){
            printf("Eixo Y\n");
        } else {
            if(x != 0 && y == 0){
                printf("Eixo X\n");
            } else {
                if (x > 0 && y > 0){
                    printf("Q1\n");
                } else {
                    if (x > 0 && y < 0){
                        printf("Q4\n");
                    } else{
                        if(x < 0 && y > 0){
                            printf("Q2\n");
                        } else{
                            if(x < 0 && y < 0){
                                printf("Q3\n");
                            }
                        }
                    }
                }
            }
        }
    }
}