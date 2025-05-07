#include <stdio.h>

int main() {
    float n;
    
    printf("Digite um numero: ");
    scanf("%f", &n);
    
    if (n >= 0) {
        printf("positivo\n");
    } else {
        printf("negativo\n");
    }
}