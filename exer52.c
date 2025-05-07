#include <stdio.h>

int main() {
    float altura, peso_ideal;
    int sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo (1 para feminino, 2 para masculino): ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        peso_ideal = (62.1 * altura) - 44.7;
    } else if (sexo == 2) {
        peso_ideal = (72.7 * altura) - 58;
    } else {
        printf("Sexo invalido. Use 1 para feminino ou 2 para masculino.\n");
    }

    printf("O peso ideal é: %.2f kg\n", peso_ideal);
}
