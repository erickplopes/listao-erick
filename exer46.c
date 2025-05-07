#include <stdio.h>

int main() {
    int codigo_usuario, senha;
    const int CODIGO_CORRETO = 1234;
    const int SENHA_CORRETA = 9999;

    printf("Digite o codigo de usuario: ");
    scanf("%d", &codigo_usuario);

    if (codigo_usuario != CODIGO_CORRETO) {
        printf("Usuario invalido!\n");
    } else {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != SENHA_CORRETA) {
            printf("Senha incorreta\n");
        } else {
            printf("Acesso permitido\n");
        }
    }
}