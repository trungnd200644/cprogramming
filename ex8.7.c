#include <stdio.h>

int main(){
    int sum = 0;
    int counter = -1;
    int grade = 0;

    while(grade >= 0){
        counter++;
        sum += grade;
        scanf("%d", &grade);
    }
    printf("%f", (double)sum / counter);
    return 0;
}