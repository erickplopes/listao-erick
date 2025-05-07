#include <stdio.h>

int main() {
    int h1, h2, m1, m2;
    int homem_mais_velho, homem_mais_novo;
    int mulher_mais_velha, mulher_mais_nova;
    int soma, produto;

    printf("Digite a idade do primeiro homem: ");
    scanf("%d", &h1);
    printf("Digite a idade do segundo homem: ");
    scanf("%d", &h2);

    printf("Digite a idade da primeira mulher: ");
    scanf("%d", &m1);
    printf("Digite a idade da segunda mulher: ");
    scanf("%d", &m2);

    if (h1 > h2) {
        homem_mais_velho = h1;
        homem_mais_novo = h2;
    } else {
        homem_mais_velho = h2;
        homem_mais_novo = h1;
    }

    if (m1 > m2) {
        mulher_mais_velha = m1;
        mulher_mais_nova = m2;
    } else {
        mulher_mais_velha = m2;
        mulher_mais_nova = m1;
    }

    soma = homem_mais_velho + mulher_mais_nova;
    produto = homem_mais_novo * mulher_mais_velha;

    printf("Soma das idades do homem mais velho com a mulher mais nova: %d/n", soma);
    printf("Produto das idades do homem mais novo com a mulher mais velha: %d", produto);
}