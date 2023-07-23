#include<stdio.h>

double calcularComissao(double valorVendas);
double calcularSalarioFinal(double salarioFixo, double valorVendas);

int main(){
    // declaração de variáveis
    double salarioFixo, valorVendas, salarioFinal, comissao;
    char nome[50];

    // entrada
    gets(nome);
    scanf("%lf %lf", &salarioFixo, &valorVendas);

    // processamento
    comissao = calcularComissao(valorVendas);
    salarioFinal = calcularSalarioFinal(salarioFixo, comissao);

    // saída
    printf("TOTAL = R$ %.2lf\n", salarioFinal);

    return 0;
}

double calcularComissao(double valorVendas){
    return valorVendas * 15/100;
}

double calcularSalarioFinal(double salarioFixo, double comissao){
    return salarioFixo + comissao;
}