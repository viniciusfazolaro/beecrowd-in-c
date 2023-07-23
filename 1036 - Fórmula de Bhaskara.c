#include<stdio.h>
#include<math.h>

double calculardelta(double a, double c);

void calcularbhaskara(double delta, double a, double b);

int main(){

    // declaração de variáveis

    double a, b, c, delta;

    // entrada

    scanf("%lf %lf %lf", &a, &b, &c);

    // processamento

    delta = calculardelta(a, c);

    calcularbhaskara(delta, a, b);

    return 0;
}

double calculardelta(double a, double c){
    return (4 * a * c);
}

void calcularbhaskara(double delta, double a, double b){
    double R1, R2;

    if(((b * b) - delta) < 0 || a <= 0){
        printf("Impossivel calcular\n");
    } else{
        R1 = (-b + sqrt((b * b) - (delta))) / (2 * a);
        R2 = (-b - sqrt((b * b) - (delta))) / (2 * a);

        // saída
        
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
}