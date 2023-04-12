#include <stdio.h>

int main() {
    int codigo, quantidade;
    float valor;

    printf("Código do item: ");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 01:
            valor = quantidade * 1.20;
            printf("Valor a ser pago: R$ %.2f\n", valor);
            break;
        case 02:
            valor = quantidade * 1.30;
            printf("Valor a ser pago: R$ %.2f\n", valor);
            break;
        case 03:
            valor = quantidade * 1.50;
            printf("Valor a ser pago: R$ %.2f\n", valor);
            break;
        case 04:
            valor = quantidade * 1.20;
            printf("Valor a ser pago: R$ %.2f\n", valor);
            break;
        case 05:
            valor = quantidade * 1.30;
            printf("Valor a ser pago: R$ %.2f\n", valor);
            break;
        case 06:
            valor = quantidade * 1.00;
            printf("Valor a ser pago: R$ %.2f\n", valor);
            break;
        default:
            printf("Código inválido\n");
    }

    return 0;
}