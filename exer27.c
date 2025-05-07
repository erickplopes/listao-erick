#include <stdio.h>

int main() {
    float valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%f", &valor2);

    if (valor1 > valor2) {
        printf("\nmaior valor: %.2f\n", valor1);
    } else {
        printf("\nmaior valor: %.2f\n", valor2);
    }
}