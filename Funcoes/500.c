#include <stdio.h>
#include <string.h>

void subtrairNumeros(char *num1, char *num2, char *resultado) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0;
    int pos = 0;

    for (int i = 0; i < len1; i++) {
        int dig1 = num1[len1 - 1 - i] - '0';
        int dig2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;

        if (dig1 < dig2 + carry) {
            dig1 += 10;
            resultado[pos++] = (dig1 - dig2 - carry) + '0';
            carry = 1;
        } else {
            resultado[pos++] = (dig1 - dig2 - carry) + '0';
            carry = 0;
        }
    }
    resultado[pos] = '\0';

    for (int i = 0; i < pos / 2; i++) {
        char temp = resultado[i];
        resultado[i] = resultado[pos - 1 - i];
        resultado[pos - 1 - i] = temp;
    }
}

int main() {
    char num1[101], num2[101], resultado[101];

    printf("Digite o primeiro número (maior ou igual ao segundo): ");
    scanf("%100s", num1);
    printf("Digite o segundo número: ");
    scanf("%100s", num2);

    subtrairNumeros(num1, num2, resultado);

    printf("Resultado da subtração: ");
    int started = 0;
    for (int i = 0; i < strlen(resultado); i++) {
        if (resultado[i] != '0' || started) {
            printf("%c", resultado[i]);
            started = 1;
        }
    }
    if (!started) {
        printf("0");
    }
    printf("\n");

    return 0;
}
