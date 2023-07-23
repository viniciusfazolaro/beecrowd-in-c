#include<stdio.h>

int verificarpositivo();

int main(){

    int qtdepositivos;

    qtdepositivos = verificarpositivo();

    printf("%d valores positivos\n", qtdepositivos);

    return 0;
}

int verificarpositivo(){

    int positivos = 0;
    int qtdenumeros = 0;
    double numero;

    while(qtdenumeros < 6){

        scanf("%lf", &numero);

        if(numero > 0){
            positivos++;
        }
        qtdenumeros++;
    }
    return positivos;
}