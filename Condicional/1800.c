#include <stdio.h>

void main() {
    int dia, mes, ano;

    printf("Digite a data (dia mês ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    int dias_no_mes;

    if (mes == 2) {
        dias_no_mes = (ano % 4 == 0) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        dias_no_mes = 30;
    } else {
        dias_no_mes = 31;
    }

    dia++;

    if (dia > dias_no_mes) {
        dia = 1;
        mes++;
        if (mes > 12) {
            mes = 1;
            ano++;
        }
    }

    printf("Data do dia seguinte: %d/%d/%d\n", dia, mes, ano);

}
