#include<stdio.h>

int main(){
    int age;
    scanf("%d", &age);

    switch (age)
    {
    case 0 ... 18:
        printf("Children");
        break;
    case 19 ... 65:
        printf("Adult");
        break;
    case 66 ... 200:
        printf("Elder");
        break;
    
    default:
        printf("invalid");
        break;
    }
    return 0;
}