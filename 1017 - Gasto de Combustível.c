#include<stdio.h>
int main(){

    int vm, deltat;
    double deltas, qtdelitros;

    scanf("%d %d", &deltat, &vm);

    deltas = vm * deltat;

    qtdelitros = deltas / 12;

    printf("%.3lf\n", qtdelitros);

    return 0;
}