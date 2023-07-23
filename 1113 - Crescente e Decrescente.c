#include<stdio.h>

void verificarordem();

int main(){

    // processamento

    verificarordem();

    return 0;
}

void verificarordem(){

    int x, y;

    while(1){

        scanf("%d %d", &x, &y);

        if(x > y){
            printf("Decrescente\n");
        } else{
            if(x < y){
                 printf("Crescente\n");
            } else{
                break;
            }
        }

    }
}