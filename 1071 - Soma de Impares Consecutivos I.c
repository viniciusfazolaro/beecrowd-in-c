#include<stdio.h>

void calcularimparesintervalo(int x, int y);

int main(){

    // declaração de variávis

    int x, y;

    // entrada

    scanf("%d %d", &x, &y);

    // processamento

    calcularimparesintervalo(x, y);

    return 0;
}

void calcularimparesintervalo(int x, int y){

    int min, max, calcimpares = 0, i = 0;

    if(x > y){
        max = x;
        min = y;
    } else{
        min = x;
        max = y;
    }

    i = min + 1;

    while (max > i){

        if(i % 2 != 0){
            calcimpares += i;
        }

        i++;
    }
    printf("%d\n", calcimpares);
}