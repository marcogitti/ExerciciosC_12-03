#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("Valores digitados: A=%d, B=%d, C=%d\n", A, B, C);

    if (A >= B && A >= C) {
        printf("O maior valor é A=%d e é o maior\n", A);
    }
    else if (B >= A && B >= C) {
        printf("O maior valor é B=%d e é o maior\n", B);
    }
    else {
        printf("O maior valor é C=%d e é o maior\n", C);
    }

    return 0;
}