#include<stdio.h>
int main(){

    int numfun, salario;
    double valorhor, salariototal;

    scanf("%d", &numfun);

    scanf("%d", &salario);

    scanf("%lf", &valorhor);

    salariototal = salario * valorhor;

    printf("NUMBER = %d\n", numfun);

    printf("SALARY = U$ %.2lf\n", salariototal);
    
    return 0;
}