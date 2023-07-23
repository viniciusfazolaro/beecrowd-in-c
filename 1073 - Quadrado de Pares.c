#include<stdio.h>
#include<math.h>

void calcularquadrados(int max);

int main(){

    // declaração de variáveis

    int max;

    // entrada

    scanf("%d", &max);

    // processamento

    calcularquadrados(max);

    return 0;
    
}

void calcularquadrados(int max){

    int quadrado = 0, calcquad = 0;

    while (quadrado < max){

        quadrado += 2;

        calcquad = pow(quadrado, 2);
        

        printf("%d^2 = %d\n", quadrado, calcquad);

    }
}