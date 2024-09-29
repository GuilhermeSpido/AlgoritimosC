#include <stdio.h>

void somarVetores(int V[100], int W[100], int S[100]) {
    int carry = 0;
    for (int i = 99; i >= 0; i--) {
        int soma = V[i] + W[i] + carry;
        S[i] = soma % 10;
        carry = soma / 10;
    }
}

void calcularFibonacci(int N, int fib[100]) {
    int V[100] = {0};
    int W[100] = {0};
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i <= N; i++) {
        for (int j = 0; j < 100; j++) {
            V[j] = fib[j];
            W[j] = fib[j];
        }
        somarVetores(V, W, fib);
    }
}

int main() {
    int N;
    printf("Digite um valor N menor ou igual a 480: ");
    scanf("%d", &N);

    if (N < 0 || N > 480) {
        printf("Valor de N inválido.\n");
        return 1;
    }

    int fib[100] = {0};
    calcularFibonacci(N, fib);

    printf("O termo de ordem %d da série de Fibonacci é: ", N);
    int started = 0;
    for (int i = 0; i < 100; i++) {
        if (fib[i] != 0 || started) {
            printf("%d", fib[i]);
            started = 1;
        }
    }
    if (!started) {
        printf("0");
    }
    printf("\n");

    return 0;
}
