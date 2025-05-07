#include <stdio.h>

int main() {
    float angulo1, angulo2, angulo3;

    printf("Digite o valor do primeiro angulo: ");
    scanf("%f", &angulo1);

    printf("Digite o valor do segundo angulo: ");
    scanf("%f", &angulo2);

    printf("Digite o valor do terceiro angulo: ");
    scanf("%f", &angulo3);

    if (angulo1 == 90 || angulo2 == 90 || angulo3 == 90) {
        printf("O triangulo é Retangulo.\n");
    } else if (angulo1 > 90 || angulo2 > 90 || angulo3 > 90) {
        printf("O triangulo é Obtusangulo.\n");
    } else {
        printf("O triangulo é Acutangulo.\n");
    }
}
