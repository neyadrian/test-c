#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1, num2, sub;
    
    printf("Digite dois numeros: ");
    scanf("%lf %lf", &num1, &num2);

    sub = num1 - num2;

    printf("A soma e: %.lf\n", sub);

    return 0;
}