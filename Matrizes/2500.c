#include <stdio.h>

void main() {
    int M[3][3], P[3][3];
    int i, j;

    printf("Digite os elementos da matriz M:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("M[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &M[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            P[j][2 - i] = M[i][j];
        }
    }

    printf("Matriz rotacionada 90 graus no sentido horário:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }
}
