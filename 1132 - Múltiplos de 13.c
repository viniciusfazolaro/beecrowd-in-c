#include<stdio.h>

void verificarnaodivisiveis13(int x, int y);

int main(){

    // declaração de variáveis

    int x, y;

    // entrada

    scanf("%d %d", &x, &y);

    // processamento

    verificarnaodivisiveis13(x, y);

    return 0;
}

void verificarnaodivisiveis13(int x, int y){

    int min, max, i = 0, soma = 0;

    if(x > y){
        max = x;
        min = y;
    } else{
        min = x;
        max = y;
    }

    for(i = min; i <= max; i++){

        if(i % 13 != 0){
            soma += i;
        }

    }

    printf("%d\n", soma);
    
}