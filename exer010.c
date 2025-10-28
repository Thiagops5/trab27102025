#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char nome_jogo[100];
    int quantidade_numeros;
    int valor_inicial, valor_final;

   
    printf("Qual o nome do Jogo da Loteria? ");
    
    scanf(" %[^\n]", nome_jogo); 

    printf("Quantos numeros devem ser sorteados? ");
    scanf("%d", &quantidade_numeros);

    printf("Qual o valor inicial do sorteio? ");
    scanf("%d", &valor_inicial);

    printf("Qual o valor final do sorteio? ");
    scanf("%d", &valor_final);

    if (valor_inicial > valor_final || quantidade_numeros <= 0) {
        printf("Parametros invalidos!\n");
        return 1;
    }

  
    srand(time(NULL));
    int range = valor_final - valor_inicial + 1;

  
    printf("\n--- Sorteio da '%s' ---\n", nome_jogo);
    printf("Sorteando %d numeros entre %d e %d:\n", 
           quantidade_numeros, valor_inicial, valor_final);
    
    for (int i = 0; i < quantidade_numeros; i++) {
        int numero_sorteado = rand() % range + valor_inicial;
        printf("Numero %d: %d\n", i + 1, numero_sorteado);
    }

    return 0;
}