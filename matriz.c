#include <stdio.h>

int main() {

    int i, j;

    // Declaracao e inicializacao de uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Exibindo a matriz 3x3:\n");

    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
