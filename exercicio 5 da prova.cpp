// Programa que informa as condições de temperatida de um deposito de alimentos refrigerados

// Importar bibliotecas
#include<iostream>
#include <stdio.h>

int main() {
    float temperatura;

    // Solicita a temperatura ao usuário
    printf("Digite a temperatura atual do depósito em graus Celsius: ");
    scanf("%f", &temperatura);

    // Avaliação da temperatura e classificação do risco
    if (temperatura < -10) {
        printf("Risco Baixo - Armazenamento ideal para alimentos congelados.\n");
    } else if (temperatura >= -10 && temperatura <= 0) {
        printf("Risco Moderado - Condições aceitáveis para armazenamento refrigerado.\n");
    } else if ((temperatura >= 1 && temperatura <= 10) || temperatura == 15) {
        printf("Risco Elevado - Monitore a temperatura.\n");
    } else { // temperatura > 10
        printf("Risco Crítico - Ação Imediata Necessária!\n");
    }

    return 0;
}
 
