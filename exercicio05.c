#include <stdio.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
        printf("Peso ideal: %.2f kg\n", pesoIdeal);
    }
    else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
        printf("Peso ideal: %.2f kg\n", pesoIdeal);
    }
    else {
        printf("Erro! Sexo inválido!\n");
    }

    return 0;
}