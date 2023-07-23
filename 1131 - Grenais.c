#include<stdio.h>

void vitoriasgrenais();

int main(){

    // processamento

    vitoriasgrenais();

    return 0;
}

void vitoriasgrenais(){

    int gremio, inter, escolha, vitoriainter = 0, vitoriagremio = 0, empates = 0, grenais = 0;

    do{
        scanf("%d %d", &inter, &gremio);

        if(inter > gremio){
            vitoriainter++;
        } else{
            if (gremio > inter){
                vitoriagremio++;
            } else{
                empates++;
            }
        }

        grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &escolha);

    } while(escolha != 2);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenais, vitoriainter, vitoriagremio, empates);

    if(vitoriainter > vitoriagremio){
        printf("Inter venceu mais\n");
    } else{
        if(vitoriainter < vitoriagremio){
            printf("Gremio venceu mais\n");
        } else{
            printf("Nao houve vencedor\n");
        }
    }
}