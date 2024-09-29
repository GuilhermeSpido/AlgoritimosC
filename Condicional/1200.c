#include <stdio.h>

void main() {
    float valor_hora, salario = 0;
    int entrada, saida, horas_trabalhadas;

    printf("Digite o valor ganho por hora: ");
    scanf("%f", &valor_hora);
    printf("Digite a hora de entrada (0-23): ");
    scanf("%d", &entrada);
    printf("Digite a hora de saída (0-23): ");
    scanf("%d", &saida);

    if (entrada >= 0 && saida <= 23 && (saida - entrada) >= 0 && (saida - entrada) <= 23) {
        if (saida >= entrada) {
            horas_trabalhadas = saida - entrada;
        } else {
            horas_trabalhadas = (24 - entrada) + saida;
        }
        salario = horas_trabalhadas * valor_hora;
        printf("Salário total: %.2f\n", salario);
    } else {
        printf("Horas de entrada ou saída inválidas!\n");
    }

}
