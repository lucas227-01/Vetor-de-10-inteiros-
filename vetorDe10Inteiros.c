#include <stdio.h>

int main(){

    int vetor[10];
    int maior;

    for(int i = 0; i < 10; i++){
        printf("Digite 10 valores inteiros aleatorios: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(int i = 1; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("Maior valor e: %d", maior);

    return 0;
}