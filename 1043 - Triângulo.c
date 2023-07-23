#include<stdio.h>

void calcular(float a, float b, float c);

int main(){

    // declaração de variáveis

    float a, b, c;

    // entrada

    scanf("%f %f %f", &a, &b, &c);

    // processamento

    calcular(a, b, c);

    return 0;
}

void calcular(float a, float b, float c){
    float perimetro, area;

    perimetro = (a + b + c);

    area = (((a + b) * c) / 2);

    if(((a + b) > c) && ((b + c) > a) && ((a + c) > b)){
        
        // saídas
        
        printf("Perimetro = %.1f\n", perimetro);
    } else{
        printf("Area = %.1f\n", area);
    }
}