int main() {
    int i;
    float a, b, c;

    printf("Digite um valor inteiro e positivo para i: ");
    scanf("%d", &i);

    printf("Digite três valores reais para a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (i == 1) {
        if (a <= b && a <= c) {
            printf("%.2f ", a);
            if (b <= c) {
                printf("%.2f %.2f", b, c);
            } else {
                printf("%.2f %.2f", c, b);
            }
        } else if (b <= a && b <= c) {
            printf("%.2f ", b);
            if (a <= c) {
                printf("%.2f %.2f", a, c);
            } else {
                printf("%.2f %.2f", c, a);
            }
        } else {
            printf("%.2f ", c);
            if (a <= b) {
                printf("%.2f %.2f", a, b);
            } else {
                printf("%.2f %.2f", b, a);
            }
        }
    } else if (i == 2) {
        if (a >= b && a >= c) {
            printf("%.2f ", a);
            if (b >= c) {
                printf("%.2f %.2f", b, c);
            } else {
                printf("%.2f %.2f", c, b);
            }
        } else if (b >= a && b >= c) {
            printf("%.2f ", b);
            if (a >= c) {
                printf("%.2f %.2f", a, c);
            } else {
                printf("%.2f %.2f", c, a);
            }
        } else {
            printf("%.2f ", c);
            if (a >= b) {
                printf("%.2f %.2f", a, b);
            } else {
                printf("%.2f %.2f", b, a);
            }
        }
    } else if (i == 3) {
        if (a >= b && a >= c) {
            if (b >= c) {
                printf("%.2f %.2f %.2f", b, a, c);
            } else {
                printf("%.2f %.2f %.2f", c, a, b);
            }
        } else if (b >= a && b >= c) {
            if (a >= c) {
                printf("%.2f %.2f %.2f", a, b, c);
            } else {
                printf("%.2f %.2f %.2f", c, b, a);
            }
        } else {
            if (a >= b) {
                printf("%.2f %.2f %.2f", a, c, b);
            } else {
                printf("%.2f %.2f %.2f", b, c, a);
            }
        }
    } else {
        printf("Valor inválido para i!");
        return 0;
    }

    return 0;
}