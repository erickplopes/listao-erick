#include <stdio.h>

int main() {
    int anos, meses, dias, tt_dias;

    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    tt_dias = (anos * 365) + (meses * 30) + dias;

    printf("Voce viveu %d dias.\n", tt_dias);

    return 0;
}
