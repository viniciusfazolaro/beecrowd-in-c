#include<stdio.h>

void calcularaumento(float salario);

int main(){

    //declaração de variáveis

    float salario;

    // entrada

    scanf("%f", &salario);

    // processamento

    calcularaumento(salario);

    return 0;
}

void calcularaumento(float salario){
    float salario15, salario12, salario10, salario7, salario4;
    float reajuste15, reajuste12, reajuste10, reajuste7, reajuste4;

    if(salario >= 0 && salario <= 400){

        salario15 = salario * 1.15;
        reajuste15 = salario15 - salario;

        printf("Novo salario: %.2lf\n", salario15);
        printf("Reajuste ganho: %.2lf\n", reajuste15);
        printf("Em percentual: 15 %%\n");
    } else{
        if(salario > 400 && salario <= 800){

            salario12 = salario * 1.12;
            reajuste12 = salario12 - salario;

            printf("Novo salario: %.2lf\n", salario12);
            printf("Reajuste ganho: %.2lf\n", reajuste12);
            printf("Em percentual: 12 %%\n");
        } else{
            if(salario > 800 && salario <= 1200){

                salario10 = salario * 1.10;
                reajuste10 = salario10 - salario;

                printf("Novo salario: %.2lf\n", salario10);
                printf("Reajuste ganho: %.2lf\n", reajuste10);
                printf("Em percentual: 10 %%\n");
            } else{
                if(salario > 1200 && salario <= 2000){
                    salario7 = salario * 1.07;
                    reajuste7 = salario7 - salario;

                    printf("Novo salario: %.2lf\n", salario7);
                    printf("Reajuste ganho: %.2lf\n", reajuste7);
                    printf("Em percentual: 7 %%\n");
                } else{
                    salario4 = salario * 1.04;
                    reajuste4 = salario4 - salario;

                    printf("Novo salario: %.2lf\n", salario4);
                    printf("Reajuste ganho: %.2lf\n", reajuste4);
                    printf("Em percentual: 4 %%\n");
                }
            }
        }
    }
}