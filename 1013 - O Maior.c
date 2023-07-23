#include<stdio.h>
int main(){

    int A, B, C;
    int MaiorAB, Maior;

    scanf("%d %d %d", &A, &B, &C);

    MaiorAB = (A + B + abs (A - B)) / 2;

    Maior = (MaiorAB + C + abs (MaiorAB - C)) / 2;

    printf("%d eh o maior\n", Maior);
    
    return 0;
}