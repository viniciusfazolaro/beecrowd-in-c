#include<stdio.h>

double calcularMedia(double A, double B, double C);


int main(){
    // declaração de variáveis
    double A, B, C, MEDIA;

    // entrada
    scanf("%lf %lf %lf", &A, &B, &C);

    // processamento
    MEDIA = calcularMedia(A, B, C);

    //saída
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}

double calcularMedia(double A, double B, double C){
    return ((A * 2) + (B * 3) + (C * 5)) / 10;
}