#include <stdio.h>

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
        return 0;
    }

    int line1[n1], line2[n2];

    for (int i = 0; i < n1; i++) {
        scanf("%d", &line1[i]);
    }
    for (int i = 0; i < n2; i++) {
        scanf("%d", &line2[i]);
    }

    for (int i = 0; i < n1; i++) {
        if (i > 0) printf(" ");
        printf("%d", line1[i] * line2[i]);
    }
    printf("\n");

    return 0;
}