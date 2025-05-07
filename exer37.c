#include <stdio.h>

int main() {
    float a, b, c;
    float soma_dois_maiores;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &a);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &b);
    
    printf("Digite o terceiro valor: ");
    scanf("%f", &c);
    
    if (a < b && a < c) {
        soma_dois_maiores = b + c;
    } 
    else if (b < a && b < c) {
        soma_dois_maiores = a + c;
    } 
    else {
        soma_dois_maiores = a + b;
    }
    
    printf("A soma dos dois maiores valores: %.2f\n", soma_dois_maiores);
}