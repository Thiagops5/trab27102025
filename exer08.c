#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    int vetor[100];
    int min = 50;
    int max = 100;

   
    srand(time(NULL));

    
    for (int i = 0; i < 100; i++) {
        
        vetor[i] = rand() % (100 - 50 + 1) + 50;
       
    }

    
    printf("Vetor preenchido com 100 valores aleatórios [50-100]:\n");
    for (int i = 0; i < 100; i++) {
        printf("Pos %d: %d\n", i, vetor[i]);
    }

    return 0;
}