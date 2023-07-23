#include<stdio.h>

void somarconsecutivos();

int main(){

    // processamento

    somarconsecutivos();

    return 0;
}

void somarconsecutivos(){

    int m, n, i = 0, min = 0, max = 0, soma = 0;

    while (1){
        scanf("%d %d", &m, &n);

        if(m <= 0 || n <= 0) break;

        if(m > n){
            max = m;
            min = n;
        } else{
            min = m;
            max = n;
        }

        soma = 0;

        for(i = min; i <= max; i++){
            printf("%d ", i);
            soma += i;
            
        }
        printf("Sum=%d\n", soma);
    }

}