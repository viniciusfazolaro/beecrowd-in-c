#include<stdio.h>

void somarimpares(int qtdetestes);

int main(){

    // declração de variáveis

    int qtdetestes;

    // entrada

    scanf("%d", &qtdetestes);

    // processamento

    somarimpares(qtdetestes);

    return 0;
}

void somarimpares(int qtdetestes){

    int testes = 0, i = 0, x, y, max, min, soma = 0;

    while (qtdetestes > testes){

        scanf("%d %d", &x, &y);

        if(x > y){
            max = x;
            min = y;
        } else{
            min = x;
            max = y;
        }

        if(min % 2 != 0){
            min++;
        }
        if(max % 2 != 0){
            max--;
        }

        soma = 0;
        
        for(i = min; i <= max; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
        printf("%d\n", soma);
                
        testes++;
    }
}