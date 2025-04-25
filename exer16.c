#include <stdio.h>

int main() {
    float n1, n2, n3, mediaFinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    mediaFinal = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    printf("A media final do aluno: %.2f\n", mediaFinal);

    return 0;
}
