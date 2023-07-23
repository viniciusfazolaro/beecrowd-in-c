#include<stdio.h>

void verificartriangulo(double A, double B, double C);

int main(){

    // declaração de variáveis

    double A, B, C;

    // entrada

    scanf("%lf %lf %lf", &A, &B, &C);

    // processamento

    verificartriangulo(A, B, C);

    return 0;
}

// saída

void verificartriangulo(double A, double B, double C){
    
    if((A >= (B + C)) || (B >= (A + C)) || (C >= (A + B))){
        printf("NAO FORMA TRIANGULO\n");
    } else{
        if(((A * A) == ((B * B) + (C * C))) || ((B * B) == (A * A) + (C * C)) || ((C * C) == (A * A) + (B * B))){
            printf("TRIANGULO RETANGULO\n");
        } else{
            if(((A * A) > (B * B) + (C * C)) || ((B * B) > (A * A) + (C * C)) || ((C * C) > (A * A) + (B * B))){
                printf("TRIANGULO OBTUSANGULO\n");
            } else{
                if(((A * A) < (B * B) + (C * C)) || ((B * B) < (A * A) + (C * C)) || ((C * C) < (A * A) + (B * B))){
                    printf("TRIANGULO ACUTANGULO\n");
                }
            }
        }
    }
    if(A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    } else{
        if((A == B && B != C) || (B == C && A != C) || (C == A && B != A)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}