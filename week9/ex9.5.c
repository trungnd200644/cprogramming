#include <stdio.h>

void printchars(int ch, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch);
    }
    
}
int main(){
    for(int i = 1; i <= 5; i++){
        printchars('*', i);
        printf("\n");
    }

    return 0;
}