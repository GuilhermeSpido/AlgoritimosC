#include <stdio.h>

void main() {
    int n, i, j, k = 1;
    int A[10][10];
    
    printf("Digite o valor de N (ordem da matriz, maximo 10): ");
    scanf("%d", &n);

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    int valid = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        for (i = left; i <= right; i++) {
            if (A[top][i] != k) {
                valid = 0;
                break;
            }
            k++;
        }
        top++;

        for (i = top; i <= bottom; i++) {
            if (A[i][right] != k) {
                valid = 0;
                break;
            }
            k++;
        }
        right--;

        if (top <= bottom) {
            for (i = right; i >= left; i--) {
                if (A[bottom][i] != k) {
                    valid = 0;
                    break;
                }
                k++;
            }
            bottom--;
        }

        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                if (A[i][left] != k) {
                    valid = 0;
                    break;
                }
                k++;
            }
            left++;
        }
    }

    printf("%d\n", valid);
}
