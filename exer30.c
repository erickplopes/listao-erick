#include <stdio.h>

int main() {
    float horas_trabalhadas_mes, salario_hora, salario_total;
    float horas_normais = 160; 
    float horas_extras;

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas_mes);

    printf("Digite o salario por hora: ");
    scanf("%f", &salario_hora);

    if (horas_trabalhadas_mes > horas_normais) {
        horas_extras = horas_trabalhadas_mes - horas_normais;
        salario_total = (horas_normais * salario_hora) + (horas_extras * salario_hora * 1.5);
    } else {
        salario_total = horas_trabalhadas_mes * salario_hora;
    }

    printf("Salario total do funcionario: R$ %.2f\n", salario_total);

}