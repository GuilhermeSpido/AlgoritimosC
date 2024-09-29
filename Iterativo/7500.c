#include <stdio.h>

void main() {
    int num, menor_num = 0, menor_soma = 0, soma_digitos;
    int primeiro_num = 1;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if (num < 0) {
            if (primeiro_num) {
                printf("-1\n");
            }
            break;
        }
        primeiro_num = 0;
        soma_digitos = 0;
        int temp = num;
        while (temp > 0) {
            soma_digitos += temp % 10;
            temp /= 10;
        }
        if (menor_num == 0 || soma_digitos < menor_soma) {
            menor_num = num;
            menor_soma = soma_digitos;
        }
    }
    if (menor_num > 0) {
        printf("Numero com menor soma dos digitos: %d\n", menor_num);
    }
}
