#include <stdio.h>

int main() {

    float notas[5][2];

    // Ler notas
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);

        for (int j = 0; j < 2; j++) {
            printf("Digite a nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Mostrar notas
    printf("\nNotas digitadas:\n");

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: ", i + 1);

        for (int j = 0; j < 2; j++) {
            printf("%.2f ", notas[i][j]);
        }

        printf("\n");
    }

    return 0;
}