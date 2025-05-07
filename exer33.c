#include <stdio.h>

int main() {
    int numero_conta;
    float saldo_atual, saldo, debito, credito;

    printf("Informe seu numero da conta: ");
    scanf("%d", &numero_conta);
    
    printf("Informe seu saldo: ");
    scanf("%f", &saldo);

    printf("Informe seu debito: ");
    scanf("%f", &debito);

    printf("Informe seu credito: ");
    scanf("%f", &credito);

    saldo_atual = saldo - debito + credito;

    if (saldo_atual >= 0) {
        printf("Conta: %d - Saldo Positivo: R$ %.2f\n", numero_conta, saldo_atual);
    } else {
        printf("Conta: %d - Saldo Negativo: R$ %.2f\n", numero_conta, saldo_atual);
    }
}