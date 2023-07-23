#include<stdio.h>

void calcularintervalo(double numero);

int main(){

    // declaração de variáveis

    double numero;

    // entrada

    scanf("%lf", &numero);

    // processamento

    calcularintervalo(numero);
}

// saída

void calcularintervalo(double numero){
    if(numero < 0 || numero > 100){
        printf("Fora de intervalo\n");
    } else{
        if(numero >= 0 && numero <=25){
            printf("Intervalo [0,25]\n");
        } else{
            if(numero <= 50){
               printf("Intervalo (25,50]\n");
            } else {
                if (numero <= 75){
                    printf("Intervalo (50,75]\n");
                } else {
                    if (numero <= 100){
                        printf("Intervalo (75,100]\n");
                    }
                }
            }
        }
    }
}