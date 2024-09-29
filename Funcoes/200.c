#include <stdio.h>

void multiplicarPorN(int V[100], int N, int S[100]) {
    int carry = 0;
    for (int i = 99; i >= 0; i--) {
        int produto = V[i] * N + carry;
        S[i] = produto % 10;
        carry = produto / 10;
    }
}

void calcularFatorial(int N, int fatorial[100]) {
    int V[100] = {0};
    V[99] = 1;
    
    for (int i = 2; i <= N; i++) {
        int S[100] = {0};
        multiplicarPorN(V, i, S);
        for (int j = 0; j < 100; j++) {
            V[j] = S[j];
        }
    }
    
    for (int i = 0; i < 100; i++) {
        fatorial[i] = V[i];
    }
}

int main() {
    int N;
    printf("Digite um número menor ou igual a 30: ");
    scanf("%d", &N);

    if (N < 0 || N > 30) {
        printf("Valor inválido.\n");
        return 1;
    }

    int fatorial[100] = {0};
    calcularFatorial(N, fatorial);

    printf("O fatorial de %d é: ", N);
    int started = 0;
    for (int i = 0; i < 100; i++) {
        if (fatorial[i] != 0 || started) {
            printf("%d", fatorial[i]);
            started = 1;
        }
    }
    if (!started) {
        printf("0");
    }
    printf("\n");

    return 0;
}
