#include <stdio.h>

void main() {
    int c, p, nv, aux, i, j;
    int mpp[11] = {0,0,0,0,0,0,0,0,0,0,0};
    int part[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cad[11] = {0,0,0,0,0,0,0,0,0,0,0};

    for (i = 0; i < 20; i++) {
        printf("Cadastro:\n");
        scanf("%d", &c);
        printf("Partido:\n");
        scanf("%d", &p);
        printf("Numero de votos:\n");
        scanf("%d", &nv);
        if (p >= 0 && p <= 10) {
            if (mpp[p] < nv) {
                mpp[p] = nv;
                cad[p] = c;
            }
        } else {
            printf("Partido invalido! Insira um partido entre 0 e 10.\n");
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i; j++) {
            if (mpp[j] > mpp[j + 1]) {
                aux = mpp[j];
                mpp[j] = mpp[j + 1];
                mpp[j + 1] = aux;
                aux = part[j];
                part[j] = part[j + 1];
                part[j + 1] = aux;
                aux = cad[j];
                cad[j] = cad[j + 1];
                cad[j + 1] = aux;
            }
        }
    }

    for (i = 1; i < 11; i++) {
        printf("Cadastro: %d\n", cad[i]);
        printf("Partido: %d\n", part[i]);
        printf("Numero de votos: %d\n", mpp[i]);
    }
}
