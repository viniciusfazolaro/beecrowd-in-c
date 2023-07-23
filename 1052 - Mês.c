#include<stdio.h>

void descobrirmes(int mes);

int main(){

    // declaração de variáveis

    int mes;

    // entrada

    scanf("%d", &mes);

    // processamento

    descobrirmes(mes);

    return 0;
}

void descobrirmes(int mes){

    if (mes == 1){
        printf("January\n");
    }
    if (mes == 2){
        printf("February\n");
    }
    if (mes == 3){
        printf("March\n");
    }
    if (mes == 4){
        printf("April\n");
    }
    if (mes == 5){
        printf("May\n");
    }
    if (mes == 6){
        printf("June\n");
    }
    if (mes == 7){
        printf("July\n");
    }
    if (mes == 8){
        printf("August\n");
    }
    if (mes == 9){
        printf("September\n");
    }
    if (mes == 10){
        printf("October\n");
    }
    if (mes == 11){
        printf("November\n");
    }
    if (mes == 12){
        printf("December\n");
    }
}