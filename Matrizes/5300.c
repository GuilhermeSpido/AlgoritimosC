#include <stdio.h>

void main() {
    int A[5][5];
    int i, j, max_val, min_val, max_row, min_col;
    
    printf("Digite os elementos da matriz A (5x5):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    max_val = A[0][0];
    max_row = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (A[i][j] > max_val) {
                max_val = A[i][j];
                max_row = i;
            }
        }
    }

    min_val = A[max_row][0];
    min_col = 0;

    for (j = 1; j < 5; j++) {
        if (A[max_row][j] < min_val) {
            min_val = A[max_row][j];
            min_col = j;
        }
    }

    printf("Elemento minimax: %d\n", min_val);
    printf("Linha: %d\n", max_row + 1);
    printf("Coluna: %d\n", min_col + 1);
}
