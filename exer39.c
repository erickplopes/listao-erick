#include <stdio.h>

int main() {
    float A, B, C;

    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if (A < B + C && B < A + C && C < A + B) {
        printf("Os valores %.2f, %.2f e %.2f formam um triangulo.\n", A, B, C);
    } else {
        printf("Os valores %.2f, %.2f e %.2f nao formam um triangulo.\n", A, B, C);
    }
}