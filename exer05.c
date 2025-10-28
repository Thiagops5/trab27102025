#include <stdio.h>

int main() {
    int quantidade;
    
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &quantidade);

    int vetor[quantidade];

   
    printf("Digite os %d valores:\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nValores na ordem inversa:\n");

    for (int i = quantidade - 1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}