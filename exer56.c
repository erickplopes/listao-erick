#include <stdio.h>

int main() {
    int num1, num2, operacao;
    float resultado;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Escolha a operacao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n");
    printf("Digite o numero da operacao (1 a 4): ");
    scanf("%d", &operacao);

    if (operacao == 1) {
        resultado = num1 + num2;
        printf("Resultado da adicao: %.2f\n", resultado);
    } else if (operacao == 2) {
        resultado = num1 - num2;
        printf("Resultado da subtracao: %.2f\n", resultado);
    } else if (operacao == 3) {
        if (num2 != 0) {
            resultado = (float)num1 / num2;
            printf("Resultado da divisao: %.2f\n", resultado);
        } else {
            printf("Erro: divisao por zero!\n");
        }
    } else if (operacao == 4) {
        resultado = num1 * num2;
        printf("Resultado da multiplicacao: %.2f\n", resultado);
    } else {
        printf("Operação invalida!\n");
    }
}
