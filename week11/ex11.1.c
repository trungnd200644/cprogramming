#include <stdio.h>

int main(){
    int a = 4, b = 5, c = 6;
    int *ptr = &a;
    printf("%d\n", *ptr);
    ptr = &b;
    printf("%d\n", *ptr);
    ptr = &c;
    printf("%d\n", *ptr);

    return 0;
}
