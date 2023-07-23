#include<stdio.h>

void verificarnumero(int qtdevaloresescolhida);

int main(){

    // declaração de variáveis

    int qtdevaloresescolhida;

    // entrada

    scanf("%d", &qtdevaloresescolhida);

    // processamento

    verificarnumero(qtdevaloresescolhida);

    return 0;
}

void verificarnumero(int qtdevaloresescolhida){

    int numero, qtdevaloresinserida = 0;

    while(qtdevaloresinserida < qtdevaloresescolhida){

        scanf("%d", &numero);

        if(numero > 0 && numero % 2 == 0){
            printf("EVEN POSITIVE\n");
        } else{
            if(numero > 0 && numero % 2 != 0){
                printf("ODD POSITIVE\n");
            } else{
                if(numero < 0 && numero % 2 == 0){
                    printf("EVEN NEGATIVE\n");
                } else{
                    if(numero < 0 && numero % 2 != 0){
                        printf("ODD NEGATIVE\n");
                    } else{
                        printf("NULL\n");
                    }
                }
            }
        }
        qtdevaloresinserida++;
    }

}