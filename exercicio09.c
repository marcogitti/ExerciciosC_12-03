#include <stdio.h>

int main() {
    int anos, meses, dias, idade_em_dias;

    printf("Digite a idade da pessoa em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    idade_em_dias = anos * 365 + meses * 30 + dias;

    printf("A idade da pessoa em dias é: %d", idade_em_dias);

    return 0;
}