#include <stdio.h>

int main(){
    float a1, a2, media;

    printf("informe a nota da primeira avaliacao: ");
    scanf("%f", &a1);

    printf("informe a nota da segunda avaliacao: ");
    scanf("%f", &a2);

    media = (a1 + a2) / 2;

    printf("media do aluno: %.2f", media);

    if (media >= 6){
        printf("\naprovado");
    } else {
        printf("\nreprovado");
    }
}