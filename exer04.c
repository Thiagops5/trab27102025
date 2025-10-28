#include <stdio.h>

int main() {
    int quantidade;
    
    printf("Quantos valores deseja calcular? ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    int vetor[quantidade];
    int menor, maior;

    printf("Digite os %d valores:\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    maior = vetor[0];

    
    for (int i = 1; i < quantidade; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i]; 
        }
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("\nO MENOR valor inserido foi: %d\n", menor);
    printf("O MAIOR valor inserido foi: %d\n", maior);

    return 0;
}