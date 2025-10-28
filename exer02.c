#include <stdio.h>

int main() {
    int quantidade;
    
    printf("Quantos valores deseja calcular? ");
    scanf("%d", &quantidade);

   
    int vetor[quantidade];
    int somatoria = 0;

    
    printf("Digite os %d valores:\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor[i]);
    }

    
    for (int i = 0; i < quantidade; i++) {
        
        somatoria = somatoria + vetor[i]; 
      
    }

    printf("\nA somatoria de todos os valores e: %d\n", somatoria);

    return 0;
}