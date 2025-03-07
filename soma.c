#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1, num2, soma;
    
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    soma = num1 + num2;

    printf("A soma e: %.lf\n", soma);

    return 0;
}