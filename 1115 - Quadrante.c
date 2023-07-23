#include<stdio.h>

void verificarquadrante();

int main(){

    // processamento

    verificarquadrante();

    return 0;
}

void verificarquadrante(){

    int x, y;

    do{

        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0){
            printf("primeiro\n");
        } else{
            if(x < 0 && y > 0){
                printf("segundo\n");
            } else{
                if(x < 0 && y < 0){
                    printf("terceiro\n");
                } else{
                    if(x > 0 && y < 0){
                        printf("quarto\n");
                    } else{
                        break;
                    }
                }
            }
        }
    } while(x != 0 || y != 0);
}