#include<stdio.h>

void calcularmediaponderada(int qtdelinhas);

int main(){

    // declaração de variáveis

    int qtdelinhas;

    // entrada

    scanf("%d", &qtdelinhas);

    // processamento

    calcularmediaponderada(qtdelinhas);

    return 0;
}

void calcularmediaponderada(int qtdelinhas){

    double media1, media2, media3, media, mediafinal;
    int linhas = 0;

    while (qtdelinhas > linhas){
        
        if(qtdelinhas > 0){
            scanf("%lf %lf %lf", &media1, &media2, &media3);

            media = (media1 * 2) + (media2 * 3) + (media3 * 5);

            mediafinal = media / (2 + 3 + 5);
            
            printf("%.1lf\n", mediafinal);
        }
        linhas++;
    }
}