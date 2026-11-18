#include <stdio.h>

int main() {
    int line, column;

    scanf("%d %d", &line, &column);
    int matriks[line][column];

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matriks[i][j]);
        }
    }

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {
            if (j > 0) printf(" ");
            printf("%d", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}