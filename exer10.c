#include <stdio.h>

int main() {
    float valorHora, horasTrabalhadas, salario;

    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &valorHora);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    salario = valorHora * horasTrabalhadas;

    printf("Seu salario do mes: R$ %.2f\n", salario);

    return 0;
}
