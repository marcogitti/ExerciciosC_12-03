#include <stdio.h>

int main() {
    int idade_em_dias, anos, meses, dias;

    printf("Digite a idade da pessoa em DIAS: ");
    scanf("%d", &idade_em_dias);

    anos = idade_em_dias / 365;
    meses = (idade_em_dias % 365) / 30;
    dias = (idade_em_dias % 365) % 30;

    printf("A idade da pessoa é: %d anos, %d meses e %d dias", anos, meses, dias);

    return 0;
}