#include <stdio.h>

void main() {
    int M[5][5], valores[5];
    int i, j, k, encontrado;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    for (k = 0; k < 5; k++) {
        printf("Digite o valor a ser buscado: ");
        scanf("%d", &valores[k]);
    }

    for (k = 0; k < 5; k++) {
        encontrado = 0;
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (M[i][j] == valores[k]) {
                    printf("Valor %d encontrado na posição: (%d, %d)\n", valores[k], i + 1, j + 1);
                    encontrado = 1;
                    break;
                }
            }
            if (encontrado) break;
        }
        if (!encontrado) {
            printf("Valor %d não tem\n", valores[k]);
        }
    }
}
