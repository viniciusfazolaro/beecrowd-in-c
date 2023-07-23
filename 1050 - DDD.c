#include<stdio.h>

void verificarddd(int ddd);

int main(){

    // declaração de variáveis

    int ddd;

    // entrada

    scanf("%d", &ddd);

    // processamento

    verificarddd(ddd);

    return 0;
}

void verificarddd(int ddd){

    if(ddd == 11){
        printf("Sao Paulo\n");
    } else{
        if(ddd == 19){
            printf("Campinas\n");
        } else{
            if(ddd == 27){
                printf("Vitoria\n");
            } else{
                if(ddd == 31){
                    printf("Belo Horizonte\n");
                } else{
                    if (ddd == 32){
                        printf("Juiz de Fora\n");
                    } else{
                        if (ddd == 61){
                            printf("Brasilia\n");
                        } else{
                            if (ddd == 71){
                                printf("Salvador\n");
                            } else{
                                if (ddd == 21){
                                    printf("Rio de Janeiro\n");
                                } else{
                                    printf("DDD nao cadastrado\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}