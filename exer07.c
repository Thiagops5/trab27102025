#include <stdio.h>

int main() {
    int principal[5];
    int auxiliar[8];

   
    printf("Digite 5 valores inteiros para o vetor principal:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &principal[i]);
    }

    for (int i = 0; i < 5; i++) {
        auxiliar[i] = principal[i];
    }

    printf("Digite mais 3 valores para completar o vetor auxiliar:\n");

    for (int i = 5; i < 8; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &auxiliar[i]);
    }

    printf("\nValores do vetor auxiliar (8 posições):\n");
    for (int i = 0; i < 8; i++) {
        printf("%d\n", auxiliar[i]);
    }

    return 0;
}