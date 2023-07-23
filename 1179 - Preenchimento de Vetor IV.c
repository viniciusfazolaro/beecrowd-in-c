#include<stdio.h>
#define MAX 5
#define TAM 15

void verificarVetor();

int main(){

    // processamento

    verificarVetor();

    return 0;
}

void verificarVetor(){

    int par[MAX], impar[MAX], i = 0, numero, qtdepar = 0, qtdeimpar = 0, contpar = 0, contimpar = 0;

    for(i = 0; i < TAM; i++){
        scanf("%d", &numero);

        if(numero % 2 == 0){
            par[qtdepar] = numero;
            qtdepar++;
            if(qtdepar == 5){
                for(contpar = 0; contpar < MAX; contpar++){
                    printf("par[%d] = %d\n", contpar, par[contpar]);
                    qtdepar = 0;
                }
            }
        } else{
            impar[qtdeimpar] = numero;
            qtdeimpar++;
            if(qtdeimpar == 5){
                for(contimpar = 0; contimpar < MAX; contimpar++){
                    printf("impar[%d] = %d\n", contimpar, impar[contimpar]);
                    qtdeimpar = 0;
                }
            }
        }
    }
    for(contimpar = 0; contimpar < qtdeimpar; contimpar++){
        printf("impar[%d] = %d\n", contimpar, impar[contimpar]);
    }

    for(contpar = 0; contpar < qtdepar; contpar++){
        printf("par[%d] = %d\n", contpar, par[contpar]);
    }

}