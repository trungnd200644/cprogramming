#include <stdio.h>

int alloddeven(int n){
    int oddflag = 0;
    int evenflag = 0;
    int last_digit = n % 10;
    if (last_digit % 2 == 0) evenflag = 1;
    else oddflag = 1;
    n /= 10;  
    while(n > 0){
        last_digit = n % 10;
        if (oddflag && last_digit % 2 == 0) return 0;
        if (evenflag && last_digit % 2 != 0) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    printf("%d\n",alloddeven(24862));
    return 0;
}
