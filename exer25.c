#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a nota da 1a avaliacao: ");
    scanf("%f", &n1);
    
    printf("Digite a nota da 2a avaliacao: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("\nMedia do aluno: %.1f\n", media);
    
    if (media >= 6.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}