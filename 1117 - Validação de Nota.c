#include<stdio.h>

void verificarnotas();

int main(){

    // processamento

    verificarnotas();

    return 0;
}

void verificarnotas(){

    double qtdenotas = 0, nota, somanotas = 0, media;

    do{

        scanf("%lf", &nota);

        if(nota < 0 || nota > 10){
            printf("nota invalida\n");
        } else{
            qtdenotas++;
            somanotas += nota;
        }

    }while(qtdenotas < 2);

    media = somanotas / 2;

    printf("media = %.2lf\n", media);
    
}