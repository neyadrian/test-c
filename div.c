#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, d;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    d = a / b;

    printf("A divisao foi: %.2f\n", d);

    return 0;
}