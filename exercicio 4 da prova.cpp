// Programa para uma estação metereologica

// Impoprtar bibliotecas
#include<iostream>
#include <stdio.h>

int main() {
    float temperatura;

    // Solicita a temperatura ao usuário
    printf("Digite a temperatura atual em graus Celsius: ");
    scanf("%f", &temperatura);

    // Avaliação da temperatura e previsão do tempo
    if (temperatura <= 0) {
        printf("Geleira - Temperatura muito fria!\n");
    } else if (temperatura > 0 && temperatura <= 15) {
        printf("Frio - Pode precisar de um casaco!\n");
    } else if (temperatura > 15 && temperatura <= 25) {
        printf("Agradável - Tempo bom para sair!\n");
    } else if (temperatura > 25 && temperatura <= 35) {
        printf("Quente - Ótimo para um dia de praia!\n");
    } else {
        printf("Muito quente - Mantenha-se hidratado!\n");
    }

    return 0;
}
