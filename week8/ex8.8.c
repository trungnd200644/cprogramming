# include <stdio.h>

int main () {
    int i, n, f;
    printf (" Enter n: ");
    scanf ("%d", &n);
    f = 1; 
    i = 2;
    while (i <= n) {
        f *= i; 
        ++i;
    }
    printf ("%d! = %d\n", n, f);
    return 0;
}