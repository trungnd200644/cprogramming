#include <stdio.h>

int main(){
    int x = 1, y = 2, z = 3;
    int *p = &x;
    int *q = &y;
    int *r = &z;

    printf("First\n\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", r);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);
    printf("\n\n");

    x = 4;
    y = 5;
    z = 6;

    printf("Second\n\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", r);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);
    printf("\n\n");

    int *temp = p;
    p = q;
    q = r;
    r = temp;

    printf("Third\n\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", r);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *r);
    printf("\n\n");
}