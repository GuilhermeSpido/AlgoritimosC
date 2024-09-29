#include <stdio.h>

void main() {
    int dia, mes, ano;

    printf("Digite o Dia, Mês e Ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int data_valida = 0;

    if (mes >= 1 && mes <= 12) {
        if (mes == 2) {
            if ((ano % 4 == 0 && dia >= 1 && dia <= 29) || (ano % 4 != 0 && dia >= 1 && dia <= 28)) {
                data_valida = 1;
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            if (dia >= 1 && dia <= 30) {
                data_valida = 1;
            }
        } else {
            if (dia >= 1 && dia <= 31) {
                data_valida = 1;
            }
        }
    }

    printf("%d\n", data_valida);

}
