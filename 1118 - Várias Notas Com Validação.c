#include<stdio.h>

void validarnotas();

int main(){

    validarnotas();

    return 0;
}

void validarnotas() {
    int qtdenotas = 0, novocalculo = 1;
    double media = 0, notas, somanotas = 0;

    while (novocalculo != 2) {
        scanf("%lf", &notas);

        if (notas < 0 || notas > 10) {
            printf("nota invalida\n");
        } else {
            qtdenotas++;
            somanotas += notas;
            media = somanotas / 2;
        }

        if (qtdenotas == 2) {
            printf("media = %.2lf\n", media);
            printf("novo calculo (1-sim 2-nao)\n");
            qtdenotas = 0;
            media = 0;
            somanotas = 0;
            scanf("%d", &novocalculo);
            while (novocalculo < 1 || novocalculo > 2) {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &novocalculo);
            }
        }
    }
}