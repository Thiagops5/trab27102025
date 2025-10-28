#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[10000];
    int min = -880;
    int max = 1500;
    
    
    int range = max - min + 1; 

    int cont_positivos = 0;
    int cont_negativos = 0;
 

    srand(time(NULL));

 
    for (int i = 0; i < 10000; i++) {
       
        vetor[i] = rand() % range + min;
    }

    for (int i = 0; i < 10000; i++) {
        if (vetor[i] > 0) {
            cont_positivos++;
        } else if (vetor[i] < 0) {
            cont_negativos++;
        }
    }

    printf("Analise de 10.000 numeros aleatorios no intervalo [%d, %d]:\n", min, max);
    printf("Valores Positivos: %d\n", cont_positivos);
    printf("Valores Negativos: %d\n", cont_negativos);

    return 0;
}