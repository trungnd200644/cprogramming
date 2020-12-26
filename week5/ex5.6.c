#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    printf("The number of students in the smallest class is %d", n / 7);
    printf("The number of students in the largest class is %d", n / 7 == 0 ? n / 7 : n / 7 + 1);
    printf("The average number of students per class is %f", n / (double)7);
    printf("The number of classes above the average size is %d", n % 7);

    return 0;
}