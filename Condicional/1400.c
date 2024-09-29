#include <stdio.h>

void main() {
    int i;
    float a, b, c, temp;

    printf("Digite o valor de i (1, 2 ou 3): ");
    scanf("%d", &i);

    printf("Digite os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Valores lidos: a = %.2f, b = %.2f, c = %.2f\n", a, b, c);

    if (i == 1) {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("Valores em ordem crescente: %.2f, %.2f, %.2f\n", a, b, c);
    } else if (i == 2) {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b < c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }
        printf("Valores em ordem decrescente: %.2f, %.2f, %.2f\n", a, b, c);
    } else if (i == 3) {
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }
        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }
        temp = b;
        b = c;
        c = temp;
        printf("Valores com menor no início, maior no meio, e segundo maior no fim: %.2f, %.2f, %.2f\n", a, b, c);
    } else {
        printf("Valor de i inválido!\n");
    }


}
