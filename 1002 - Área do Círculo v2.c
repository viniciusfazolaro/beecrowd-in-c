#include<stdio.h>
#include<math.h>
#define PI 3.14159

double calcularArea(double raio);

int main(){
    // declaração de variáveis
    double raio, area;

    // entrada de dados
    scanf("%lf", &raio);

    area = calcularArea(raio);

    //saida
    printf("A=%.4lf\n", area);

    return 0;
}

double calcularArea(double raio){
    return PI * pow(raio, 2);
}