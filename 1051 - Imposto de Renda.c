#include<stdio.h>

void calcularIR(double renda);

int main(){

    // declaração de variáveis

    double renda;

    // entrada

    scanf("%lf", &renda);

    // processamento

    calcularIR(renda);

    return 0;
}

void calcularIR(double renda){
    double IR8, IR18, IR28; // imposto de renda e a porcentagem 
    
    IR8 = (renda - 2000) * 0.08;
    IR18 = (renda - 3000) * 0.18 + (1000 * 0.08);
    IR28 = (renda - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08);

    if (renda <= 2000){
        printf("Isento\n");
    } else{
        if(renda <= 3000){
            printf("R$ %.2lf\n", IR8);
        } else{
            if(renda <= 4500){
                printf("R$ %.2lf\n", IR18);
            } else{
                printf("R$ %.2lf\n", IR28);
            }
        }
    }
}