#include<stdio.h>

void verificarsenha();

int main(){

    // processamento

    verificarsenha();

    return 0;
}

void verificarsenha(){

    int senha;

    do{
        scanf("%d", &senha);
        if(senha != 2002){
            printf("Senha Invalida\n");
        }

    } while(senha != 2002);

    printf("Acesso Permitido\n");
}