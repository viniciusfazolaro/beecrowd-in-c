#include<stdio.h>

void calcularsequenciaIJ();

int main(){

    // processamento

    calcularsequenciaIJ();

    return 0;
}

void calcularsequenciaIJ(){

    int I , J = 8;

    for(I = 0; I <= 10; I++){

        if(I % 2 != 0){
            for(J = 7; J >= 5; J--){
                printf("I=%d J=%d\n", I, J);
            }
        }
    }
}