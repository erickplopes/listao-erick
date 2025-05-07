#include <stdio.h>

int main() {
    int x, y, z;
    char resposta;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    z = (x * y) + 5;

    if (z <= 0) {
        resposta = 'A';
    } else if (z <= 100) {
        resposta = 'B';
    } else {
        resposta = 'C';
    }

    printf("Z = %d, Resposta = %c\n", z, resposta);
}