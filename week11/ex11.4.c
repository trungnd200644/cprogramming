#include <stdio.h>

void rotate(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main(){
    int a = 4, b = 5, c = 6;
    printf("%d %d %d \n", a, b, c);
    rotate(&a, &b, &c);
    printf("%d %d %d \n", a, b, c);
    return 0;
}