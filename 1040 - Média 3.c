#include<stdio.h>

double CalcularMedia(double N1, double N2, double N3, double N4);
void verificaraprovado(double media, double recuperacao, double mediafinal);

int main(){

    // declaração de variáveis

    double N1, N2, N3, N4, media, recuperacao, mediafinal;

    // entrada

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    // processamento
    media = CalcularMedia(N1, N2, N3, N4);
    verificaraprovado(media, recuperacao, mediafinal);
    return 0;
}

double CalcularMedia(double N1, double N2, double N3, double N4){
    return ((N1 * 2) + (N2 * 3) + (N3 * 4) + N4) / 10;
}

void verificaraprovado(double media, double recuperacao, double mediafinal){

    printf("Media: %.1lf\n", media);
    
    if(media >= 7){
        printf("Aluno aprovado.\n");
    } else {
        if(media >= 5){
            printf("Aluno em exame.\n");
            scanf("%lf", &recuperacao);
            printf("Nota do exame: %.1lf\n", recuperacao);
            mediafinal = ((media + recuperacao) / 2);
            if (mediafinal > 5){
                printf("Aluno aprovado.\n");
            } else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n", mediafinal);
        } else {
            if(media < 5){
                printf("Aluno reprovado.\n");
            }
        }
    }
}