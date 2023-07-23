#include<stdio.h>

void verificarpositivos();

int main(){

    // processamento

    verificarpositivos();

    return 0;
}

void verificarpositivos(){

    int qtdepositivos = 0, qtdevalores = 0;
    double valores = 0, somanotas = 0, media;

    while (qtdevalores < 6){
        scanf("%lf", &valores);

        if(valores > 0){
            qtdepositivos++;
            somanotas += valores;
        }
        qtdevalores++;
    }
    
    media = (somanotas / qtdepositivos);
    
    printf("%d valores positivos\n%.1lf\n", qtdepositivos, media);

}