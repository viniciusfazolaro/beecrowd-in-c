#include<stdio.h>

double calcularSalario(int qtdeHora, double valorHora);

int main(){
    // declaração de variáveis
    int numero, qtdeHora;
    double valorHora, salario;

    // entrada
    scanf("%d %d %lf", &numero, &qtdeHora, &valorHora);
    
    // processamento
    salario = calcularSalario(qtdeHora, valorHora);

    //saida
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salario);

    return 0;
}

double calcularSalario(int qtdeHora, double valorHora){
    return qtdeHora * valorHora;
}