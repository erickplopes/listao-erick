#include <stdio.h>

int main() {
    float quantidade_atual, quantidade_maxima, quantidade_minima, quantidade_media;

    printf("Digite a quantidade atual em estoque: ");
    scanf("%f", &quantidade_atual);
    
    printf("Digite a quantidade maxima em estoque: ");
    scanf("%f", &quantidade_maxima);
    
    printf("Digite a quantidade minima em estoque: ");
    scanf("%f", &quantidade_minima);

    quantidade_media = (quantidade_maxima + quantidade_minima) / 2;

    if (quantidade_atual >= quantidade_media) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

}