#include <stdio.h>

int checkSymmetric(int a[], int n);
void main() {
    int a[100], n, i;
    printf(" Number of elements: ");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {

        printf("a[%d]= ", i);
        scanf("%d", & a[i]);

    }
    printf("\n Array's content:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    if (checkSymmetric(a, n))
        printf("\n array is symmetric");
    else
        printf("\n array is not symmetric ");

}

int checkSymmetric(int a[], int n) {
    int i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] != a[j]) return 0;

        i++;
        j--;

    }
    return 1;
}