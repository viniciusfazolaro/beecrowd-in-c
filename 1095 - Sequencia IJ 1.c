#include<stdio.h>

void calcularsequenciaIJ();

int main(){

    // processamento

    calcularsequenciaIJ();

    return 0;
}

void calcularsequenciaIJ(){

    int I = -2, J = 65;

    while(J > 0){

        I += 3;
        J -= 5;

        printf("I=%d J=%d\n", I, J);
        
    }   
}