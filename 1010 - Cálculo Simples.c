#include<stdio.h>
int main(){
    int codigo, qtde;
    double valor, valortotal;

    scanf("%d %d %lf", &codigo, &qtde, &valor);
    
    valortotal = qtde * valor;
    
    scanf("%d %d %lf", &codigo, &qtde, &valor);

    printf("VALOR A PAGAR: R$ %.2lf\n", valortotal + qtde * valor);

    return 0;
    
}