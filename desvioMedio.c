#include <stdio.h>
#include <math.h>

int main(){

    double vetor[10];
    double soma = 0;
    double media;
    double desvio = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;

    for (int i = 0; i < 10; i++) {
        desvio += fabs(vetor[i] - media);
    }

    desvio = desvio / 10;

    printf("Media = %.2lf\n", media);
    printf("Desvio medio = %.2lf\n", desvio);

    return 0;
}