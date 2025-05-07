#include <stdio.h>

int main() {
    int ano_atual, ano_nasc, idade;
    
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nasc);

    idade = ano_atual - ano_nasc;
    
    printf("\nIdade: %d anos\n", idade);

    if (idade >= 16) {
        printf("pode votar este ano\n");
    } else {
        printf("nao pode votar este ano\n");
    }
}