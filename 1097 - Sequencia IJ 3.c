#include<stdio.h>

void calcularsequenciaIJ();

int main(){

    // processamento

    calcularsequenciaIJ();

    return 0;
}

void calcularsequenciaIJ(){

    int i = 1, j = 7, tres;

    for(i = 1; i < 10; i += 2){

        for(tres = 0; tres < 3; tres++){
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        j += 5;
    }
}