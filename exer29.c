#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    printf("Digite a hora de inicio (0-23): ");
    scanf("%d", &hora_inicio);

    printf("Digite a hora de fim (0-23): ");
    scanf("%d", &hora_fim);

    if (hora_fim > hora_inicio) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_fim;
    }

    printf("A duracao do jogo foi de %d horas.\n", duracao);

}
