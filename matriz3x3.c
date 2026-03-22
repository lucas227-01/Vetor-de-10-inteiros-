#include <stdio.h>

int main() {

    int matriz[3][3];
    int somaDiagonal = 0;
    int somaTotal = 0;

    // Ler valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {

            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            somaTotal += matriz[i][j];

            if (i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
    }

    printf("Soma total = %d\n", somaTotal);
    printf("Soma diagonal principal = %d\n", somaDiagonal);

    return 0;
}