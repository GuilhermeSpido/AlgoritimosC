#include <stdio.h>
#include <string.h>

void lerNumero(char num[101], int V[100]) {
    int length = strlen(num);
    for (int i = 0; i < 100; i++) {
        if (i < 100 - length) {
            V[i] = 0;
        } else {
            V[i] = num[i - (100 - length)] - '0';
        }
    }
}

void somarNumeros(int A[100], int B[100], int S[101]) {
    int carry = 0;
    for (int i = 99; i >= 0; i--) {
        int soma = A[i] + B[i] + carry;
        S[i + 1] = soma % 10;
        carry = soma / 10;
    }
    S[0] = carry;
}

int main() {
    char num1[101], num2[101];
    int A[100] = {0}, B[100] = {0}, S[101] = {0};

    printf("Digite o primeiro número de até 100 dígitos: ");
    scanf("%100s", num1);
    printf("Digite o segundo número de até 100 dígitos: ");
    scanf("%100s", num2);

    lerNumero(num1, A);
    lerNumero(num2, B);
    somarNumeros(A, B, S);

    printf("A soma dos números é: ");
    int started = 0;
    for (int i = 0; i <= 100; i++) {
        if (S[i] != 0 || started) {
            printf("%d", S[i]);
            started = 1;
        }
    }
    if (!started) {
        printf("0");
    }
    printf("\n");

    return 0;
}
