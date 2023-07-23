#include<stdio.h>

double calcularMedia(double A, double B);

int main(){
    // declaração de variáveis
    double A, B, MEDIA;

    // entrada
    scanf("%lf %lf", &A, &B);

    // processamento
    MEDIA = calcularMedia(A, B);

    // saída
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}

double calcularMedia(double A, double B){
    return ((A * 3.5) + (B * 7.5)) / 11;
}