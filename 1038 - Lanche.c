#include<stdio.h>

double calcularconta(int codigo, int qtde);

int main(){

    // declaração de variáveis

    int codigo, qtde;
    double conta;

    // entrada

    scanf("%d %d", &codigo, &qtde);

    // processamento

    conta = calcularconta(codigo, qtde);

    // saída

    printf("Total: R$ %.2lf\n", conta);
}

//saída

double calcularconta(int codigo, int qtde){
    if(codigo == 1){
        return (4 * qtde);
    } else{
        if (codigo == 2){
            return (4.5 * qtde);
        } else{
            if (codigo == 3){
                return (5 * qtde);
            } else{
                if(codigo == 4){
                    return (2 * qtde);
                } else{
                    if(codigo == 5){
                        return (1.5 * qtde);
                    }
                }
            }
        }
    }
}