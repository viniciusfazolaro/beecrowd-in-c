#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define TAM 1

void calcularcobaias(int qtdetestes);

int main(){

    // declaração de variáveis

    int qtdetestes;

    // entrada

    scanf("%d", &qtdetestes);

    // processamento

    calcularcobaias(qtdetestes);

    return 0;
}

void calcularcobaias(int qtdetestes){

    char cobaia = 'A';
    int i, qtdecoelhos = 0, qtdesapos = 0, qtderatos = 0, qtdeanimal = 0, total = 0;
    double percentcoelho, percentrato, percentsapo;

    for(i = 0; i < qtdetestes; i++){

        scanf("%d %c", &qtdeanimal, &cobaia);
        cobaia = toupper(cobaia);

        if((cobaia == 'C')){
            qtdecoelhos += qtdeanimal;
        } else{
            if((cobaia == 'R')){
                qtderatos += qtdeanimal;
            } else{
                if((cobaia == 'S')){
                    qtdesapos += qtdeanimal;
                }
            }   
        }

        total = qtdecoelhos + qtdesapos + qtderatos;

        qtdeanimal = 0;

    }

    percentcoelho = ((double)qtdecoelhos * 100) / (double)total;
    percentrato = ((double)qtderatos * 100) / (double)total;
    percentsapo = ((double)qtdesapos * 100) / (double)total;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, qtdecoelhos, qtderatos, qtdesapos, percentcoelho, percentrato, percentsapo);

}