#include <stdio.h>

int main() {
    int num_lados;
    float medida_lado;

    printf("Digite o nUmero de lados do polígono (3, 4 ou 5): ");
    scanf("%d", &num_lados);

    printf("Digite a medida do lado (em cm): ");
    scanf("%f", &medida_lado);

    

    if (num_lados == 3) {
        printf("Triangulo - Perimetro: %.2f cm\n", 3 * medida_lado);
    } 
    else if (num_lados == 4) {
        printf("Quadrado - Área: %.2f cm²\n", medida_lado * medida_lado);
    } 
    else if (num_lados == 5) {
        printf("PENTAGONO\n");
    } 
    else {
        printf("Numero de lados invalido. Use apenas 3, 4 ou 5.\n");
    }
}