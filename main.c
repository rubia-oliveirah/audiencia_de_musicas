#include <stdio.h>

int main() {
    // Vetor com reproducoes simuladas de 10 musicas
    int reproducoes[10] = {
        850, 1200, 430, 2500, 1750,
        980, 3200, 640, 2100, 1500
    };

    // Vetores que serao utilizados na ordenacao
    int crescente[10];
    int decrescente[10];
    int i, j, temp;

    // Copia os dados originais para os vetores de ordenacao
    for (i = 0; i < 10; i++) {
        crescente[i] = reproducoes[i];
        decrescente[i] = reproducoes[i];
    }

    // Exibe os dados na ordem original
    printf("====================================\n");
    printf("     AUDIENCIA DE MUSICAS\n");
    printf("====================================\n");

    printf("\nOrdem original: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", reproducoes[i]);
    }

    printf("\n");

    // Bubble Sort em ordem crescente
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (crescente[j] > crescente[j + 1]) {
                temp = crescente[j];
                crescente[j] = crescente[j + 1];
                crescente[j + 1] = temp;
            }
        }
    }

    // Exibe os dados em ordem crescente
    printf("\nOrdem crescente: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", crescente[i]);
    }

    printf("\n");

    // Bubble Sort em ordem decrescente
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (decrescente[j] < decrescente[j + 1]) {
                temp = decrescente[j];
                decrescente[j] = decrescente[j + 1];
                decrescente[j + 1] = temp;
            }
        }
    }

    // Exibe os dados em ordem decrescente
    printf("Ordem decrescente: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", decrescente[i]);
    }

    printf("\n\nOrdenacao concluida com sucesso!\n");
    printf("Fim do programa.\n");

    return 0;
}
