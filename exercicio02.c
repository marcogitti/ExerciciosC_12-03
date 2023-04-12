#include <stdio.h>

int main() {
    int A, B;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A % B == 0 || B % A == 0) {
        printf("%d e %d SÂO múltiplos!\n", A, B);
    }
    else {
        printf("%d e %d NÂO SÂO múltiplos!\n", A, B);
    }

    return 0;
}