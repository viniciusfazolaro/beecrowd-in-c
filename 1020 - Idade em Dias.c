#include<stdio.h>

void converter(int idade);

int main(){

    // declaração de variáveis

    int idade;

    // entrada
    
    scanf("%d", &idade);

    // processamento

    converter(idade);

    return 0;
}

void converter(int idade){
    int anos, meses;

    anos = idade / 365;

    printf("%d ano(s)\n", anos);
    
    meses = idade % 365 / 30;

    printf("%d mes(es)\n", meses);

    idade = idade % 365 % 30;

    printf("%d dia(s)\n", idade);

}