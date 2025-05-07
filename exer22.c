#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    if (n > 10) {
        printf("maior que 10\n");
    } else {
        printf("Menor que 10\n");
    }
}