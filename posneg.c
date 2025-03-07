#include <stdio.h>
#include <stdlib.h>

int main(){

    double x;

    printf("Digite um numero: ");
    scanf("%lf", &x);

    if (x > 0) {
        printf("Positivo\n");
    } else if (x < 0) {
        printf("Negativo\n");
    } else if (x == 0) {
        printf("Nulo\n");
    }
    
    return 0;
}