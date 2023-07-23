#include<stdio.h>
int main(){

    char nome[40];
    double fixo, totalvendas, comissao, salariofinal;

    scanf("%s", nome);

    scanf("%lf", &fixo);

    scanf("%lf", &comissao);

    totalvendas = comissao * .15;

    salariofinal = fixo + totalvendas;

    printf("TOTAL = R$ %.2lf\n", salariofinal);

    return 0;
}