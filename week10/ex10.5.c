#include <stdio.h>

void swap(int * a, int * b) {
    int temp;
    temp = * a;
    * a = * b;
    * b = temp;
}

void main() {
    int n, a[100], i, j, dem;
    printf("Enter the number of elements in array:");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", & a[i]);
    }
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)

            if (a[i] > a[j]) swap( & a[i], & a[j]);

    i = 0;
    j = 0;
    dem = 0;
    while (i < n) {
        dem = 0;
        j = i;
        while (a[i] == a[j]) {
            dem++;
            j++;

        }
        printf("\n%d occurs for %d times in array", a[i], dem);
        i = j;
    }
}

