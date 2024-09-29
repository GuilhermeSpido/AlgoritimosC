#include <stdio.h>
#include <string.h>

void somarNumeros(char *num1, char *num2, char *resultado) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0;
    int pos = 0;

    for (int i = 0; i < (len1 > len2 ? len1 : len2) || carry; i++) {
        int dig1 = (i < len1) ? num1[len1 - 1 - i] - '0' : 0;
        int dig2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;

        int soma = dig1 + dig2 + carry;
        resultado[pos++] = (soma % 10) + '0';
        carry = soma / 10;
    }
    resultado[pos] = '\0';

    for (int i = 0; i < pos / 2; i++) {
        char temp = resultado[i];
        resultado[i] = resultado[pos - 1 - i];
        resultado[pos - 1 - i] = temp;
    }
}

int main() {
    char num1[101], num2[101], resultado[102];

    printf("Digite o primeiro número: ");
    scanf("%100s", num1);
    printf("Digite o segundo número: ");
    scanf("%100s", num2);

    somarNumeros(num1, num2, resultado);

    printf("Resultado da soma: ");
    for (int i = 0; i < strlen(resultado); i++) {
        printf("%c", resultado[i]);
    }
    printf("\n");

    return 0;
}
