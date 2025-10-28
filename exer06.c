#include <stdio.h>

int main() {
    int quantidade;
    printf("Quantos valores deseja inserir? ");
    scanf("%d", &quantidade);

    int vetor_principal[quantidade];
    int par[quantidade];   
    int impar[quantidade]; 

    int cont_par = 0;
    int cont_impar = 0;

    printf("Digite os %d valores:\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &vetor_principal[i]);
    }

    for (int i = 0; i < quantidade; i++) {
    
        if (vetor_principal[i] % 2 == 0) {
           
            par[cont_par] = vetor_principal[i];
            cont_par++; 
        } else {
         
            impar[cont_impar] = vetor_principal[i];
            cont_impar++; 
        }
    }

    printf("\n--- Vetor de Pares ---\n");
    for (int i = 0; i < cont_par; i++) {
        printf("%d\n", par[i]);
    }

    printf("\n--- Vetor de Impares ---\n");
    for (int i = 0; i < cont_impar; i++) {
        printf("%d\n", impar[i]);
    }

    return 0;
}