#include<stdio.h>
int main(){

    int X;
    double Y, qtdekml;

    scanf("%i", &X);
    
    scanf("%lf", &Y);

    qtdekml = X / Y;

    printf("%.3lf km/l\n", qtdekml);

    return 0;
}