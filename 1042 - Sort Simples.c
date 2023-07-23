#include<stdio.h>

void verificarmaior(int A, int B, int C);

int main(){

    // declaração de variáveis

    int A, B, C;

    // entrada

    scanf("%d %d %d", &A, &B, &C);

    // processamento

    verificarmaior(A, B, C);
    
    return 0;
}

// saída

void verificarmaior(int A, int B, int C){

    if(A > B && B > C){
        printf("%d\n%d\n%d\n\n", C, B, A);
    } else{
        if (B > A && A > C){
            printf("%d\n%d\n%d\n\n", C, A, B);
        } else{
            if(C > A && A > B){
                printf("%d\n%d\n%d\n\n", B, A, C);
            } else{
                if (A > C && C > B){
                    printf("%d\n%d\n%d\n\n", B, C, A);

                } else{
                    if(B > C && C > A){
                        printf("%d\n%d\n%d\n\n", A, C, B);
                    } else{
                        if(C > B && B > A){
                            printf("%d\n%d\n%d\n\n", A, B, C);
                        }
                    }
                }
            }
        }
    }
    printf("%d\n%d\n%d\n", A, B, C);
}