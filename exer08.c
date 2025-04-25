#include <stdio.h>

int main() {
    float m, cm;

    printf("Digite a medida em metros: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%.2f metros equivalem a %.2f centemetros. \n", m, cm);

    return 0;
}