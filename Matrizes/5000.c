#include <stdio.h>

void main() {
    int M[3][3], N[3][3], P[3][3] = {0};
    int i, j, k;

    printf("Digite os elementos da matriz M:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Digite os elementos da matriz N:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("N[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &N[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                P[i][j] += M[i][k] * N[k][j];
            }
        }
    }

    printf("Matriz P (produto de M e N):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }
}
