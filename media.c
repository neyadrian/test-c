#include <stdio.h>
#include <stdlib.h>

int main(){

    float A, B, M;

    printf("Digite as notas: ");
    scanf("%f %f", &A, &B);

    M = (A + B) / 2;

    if (M >= 7) {
        printf("Aprovado\n");
    } else if (M < 4) {
        printf("Reprovado\n");
    } else {
        printf("Recuperacao\n");
    }

    return 0;
}