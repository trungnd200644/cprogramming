#include <stdio.h>

int main(){
    int a = 4, b = 5, c = 6;
    int *ptr = &a;
    *ptr += 100;
    printf("%d\n", *ptr);
    ptr = &b;
    *ptr += 100;
    printf("%d\n", *ptr);
    ptr = &c;
    *ptr += 100;
    printf("%d\n", *ptr);

    return 0;
}
