#include <stdio.h>

int main() {
    float valor1, valor2;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor (diferente do primeiro): ");
    scanf("%f", &valor2);
    
    printf("\nValores em ordem crescente: ");
    
    if (valor1 < valor2) {
        printf("%.2f, %.2f\n", valor1, valor2);
    } else {
        printf("%.2f, %.2f\n", valor2, valor1);
    }
}