#include <stdio.h>

double salary(int h){
    if (h > 40){
        return 40 * 15000 + 1.5 * 15000 * (h - 40);
    }else
    {
        return 15000 * h;
    }
    
}

int main(){
    int hour;
    scanf("%d", &hour);

    if(hour >= 10 && hour <=65) printf("%f\n", salary(hour));

    return 0;
}