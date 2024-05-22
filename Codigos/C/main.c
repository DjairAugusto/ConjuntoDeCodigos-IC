#include <stdio.h>

int main() {
    // Definindo o vetor para armazenar as temperaturas
    float temperaturas[7];

    // Lendo as temperaturas para cada dia da semana
    printf("Digite as temperaturas para cada dia da semana:\n");
    for (int i = 0; i < 7; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);

    // Calculando a menor e a maior temperatura
    float menor = temperaturas[0], maior = temperaturas[0];
    for (int i = 1; i < 7; i++) {
        if (temperaturas[i] < menor) {
            menor = temperaturas[i];
        }
        if (temperaturas[i] > maior) {
            maior = temperaturas[i];
        }
    }
    // Calculando a temperatura média
    float soma = 0;
    for (int i = 0; i < 7; i++) {
        soma += temperaturas[i];
    }
    float media = soma / 7;

    // Contando as temperaturas inferiores e superiores à média
    int abaixo_media = 0, acima_media = 0;
    for (int i = 0; i < 7; i++) {
        if (temperaturas[i] < media) {
            abaixo_media++;
        } else if (temperaturas[i] > media) {
            acima_media++;
        }
    }

    // Imprimindo os resultados
    printf("\nMenor temperatura: %.2f°C\n", menor);
    printf("Maior temperatura: %.2f°C\n", maior);
    printf("Temperatura média: %.2f°C\n", media);
    printf("Temperaturas inferiores à média: %d dias\n", abaixo_media);
    printf("Temperaturas superiores à média: %d dias\n", acima_media);

    return 0;
}