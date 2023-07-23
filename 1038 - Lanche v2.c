#include<stdio.h>

;

int main(){

    // declaração de variáveis

    int codigo, qtde;

    // entrada

    scanf("%d %d", &codigo, &qtde);

    // processamento

    verificarlanche(codigo, qtde);

    return 0;
}

void verificarlanche(int codigo, int qtde){
    double preco;
    switch (codigo)
    {
    case 1: {
        preco = 4 * qtde;
        printf("Total: R$ %.2lf\n", preco);
        break;
    }
    case 2: {
        preco = 4.5 * qtde;
        printf("Total: R$ %.2lf\n", preco);
        break;
    }
    case 3:{
        preco = 5 * qtde;
        printf("Total: R$ %.2lf\n", preco);
        break;
    }
    case 4:{
        preco = 2 * qtde;
        printf("Total: R$ %.2lf\n", preco);
        break;
    }
    case 5:{
        preco = 1.5 * qtde;
        printf("Total: R$ %.2lf\n", preco);
        break;
    }
    }
}