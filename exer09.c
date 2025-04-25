#include <stdio.h>

int main() {
    float lado, area, dobro_area;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    dobro_area = 2 * area;

    printf("A area do quadrado: %.2f\n", area);
    printf("O dobro da area: %.2f\n", dobro_area);

    return 0;
}
