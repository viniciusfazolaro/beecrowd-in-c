#include<stdio.h>

void calcularsequenciaIJ();

int main(){

    // processamento

    calcularsequenciaIJ();

    return 0;
}

void calcularsequenciaIJ(){

    double i, j = 0, tres;

    for(i = 0; i < 2; i += 0.2){

        for(tres = 0; tres < 3; tres++){
            j = tres + i + 1;

            printf("I=%g J=%g\n", i, j);
        }
    }
}