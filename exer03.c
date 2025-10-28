#include <stdio.h>

int main() {
    int quantidade;
    
    printf("Quantos valores (float) deseja calcular? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1; 
    }

    float vetor[quantidade];
    float soma = 0.0f;
    float media;

 
    printf("Digite os %d valores:\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%f", &vetor[i]);
    }

    
    for (int i = 0; i < quantidade; i++) {
        soma += vetor[i];
    }

   
    media = soma / quantidade;

    printf("\nA media de todos os valores eh: %.2f\n", media);

    return 0;
}