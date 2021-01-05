#include <stdio.h>

int main() {
    float a[3][3], b[3][3], c[3][3];
    int m, n, p;
    int i, j, k;
    float temp;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("a[%d][%d]=", i + 1, j + 1);
            scanf("%f", & temp);
            printf("b[%d][%d]=", i + 1, j + 1);
            scanf("%f", & temp);
            b[i][j] = temp;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
        }
    }
    printf("\n Matrix A:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%2.2f\t", a[i][j]);

        }
    }

    printf("\n Matrix b:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%2.2f\t", b[i][j]);

        }
    }
    printf("\n Matrix c:");
    for (i = 0; i < 3; i++) {
        printf("\n");
        for (j = 0; j < 3; j++) {
            printf("%2.2f\t", c[i][j]);
        }
    }
    return 0;
}