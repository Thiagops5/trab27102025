#include <stdio.h>

int main() {
   
    int vetor[8];
    
    printf("Digite 8 numeros inteiros:\n");

    for (int i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   
    printf("\nValores armazenados no vetor:\n");
    for (int i = 0; i < 8; i++) {
        printf("Posicao %d: %d\n", i, vetor[i]);
    }

    return 0;
}