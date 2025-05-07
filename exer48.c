#include <stdio.h>

int main(){
    float a1, a2, aop, media;

    printf("informe a nota da primeira avaliação: ");
    scanf("%f", &a1);

    printf("informe a nota da segunda avaliação: ");
    scanf("%f", &a2);

    printf("informe a nota da avaliação optativa (se não foi feita digite -1): ");
    scanf("%f", &aop);

    if (aop != -1) {
        if (a1 < aop && aop > a1) {
            a1 = aop;
        } else if(a2 < aop && aop > a2){
            a2 = aop;
        }
    }

    media = (a1 + a2) / 2;

    printf("media: %.2f", media);

    if (media>=6){
        printf("\naprovado");
    } else if (media>=3){
        printf("\no aluno esta de exame");
    } else {
        printf("\naluno reprovado");
    }
}   