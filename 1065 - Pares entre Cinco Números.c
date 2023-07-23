#include<stdio.h>

void verificarpar();

int main(){

    verificarpar();

    return 0;
}

void verificarpar(){
    
    int par = 0, qtdenumeros = 0, numero;

    while (qtdenumeros < 5){
        
        scanf("%d", &numero);

        if(numero % 2 == 0){
            par++;
        }

        qtdenumeros++;
    }
    
    printf("%d valores pares\n", par);
}