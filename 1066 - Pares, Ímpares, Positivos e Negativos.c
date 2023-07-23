#include<stdio.h>

void verificarnumero();

int main(){

    verificarnumero();

    return 0;
}

void verificarnumero(){

    int numero, qtdenumero = 0, par = 0, impar = 0, negativo = 0, positivo = 0;
    
    while (qtdenumero < 5){
        scanf("%d", &numero);
        qtdenumero++;

        if(numero > 0){
            positivo++;
        } else{
            if (numero < 0){
                negativo++;
            }
        }
        
        if(numero % 2 == 0){
            par++;
        } else{
            if(numero % 2 != 0){
                impar++;
            }
        }
        
    }
    
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);
}