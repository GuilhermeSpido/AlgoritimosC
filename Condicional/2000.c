#include <stdio.h>

void main() {
    float valor_hora, salario = 0;
    int entrada, saida;

    printf("Digite o valor ganho por hora: ");
    scanf("%f", &valor_hora);
    printf("Digite a hora de entrada (0-24): ");
    scanf("%d", &entrada);
    printf("Digite a hora de saída (0-24): ");
    scanf("%d", &saida);

    if (entrada >= 0 && saida <= 24 && entrada < saida) {
        if (entrada < 8) {
            int horas_trabalhadas = (saida < 8) ? (saida - entrada) : (8 - entrada);
            salario += horas_trabalhadas * valor_hora * 2;
            entrada = (saida < 8) ? saida : 8;
        }
        
        if (entrada >= 8 && entrada < 12) {
            int horas_trabalhadas = (saida < 12) ? (saida - entrada) : (12 - entrada);
            salario += horas_trabalhadas * valor_hora;
            entrada = (saida < 12) ? saida : 12;
        }
        
        if (entrada >= 12 && entrada < 14) {
            int horas_trabalhadas = (saida < 14) ? (saida - entrada) : (14 - entrada);
            salario += horas_trabalhadas * valor_hora * 2;
            entrada = (saida < 14) ? saida : 14;
        }
        
        if (entrada >= 14 && entrada < 18) {
            int horas_trabalhadas = (saida < 18) ? (saida - entrada) : (18 - entrada);
            salario += horas_trabalhadas * valor_hora;
            entrada = (saida < 18) ? saida : 18;
        }
        
        if (entrada >= 18 && entrada < 24) {
            int horas_trabalhadas = saida - entrada;
            salario += horas_trabalhadas * valor_hora * 2;
        }
    }

    printf("Salário total: %.2f\n", salario);
}
