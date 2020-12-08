#include <stdio.h>

int main(){
    int found = 0;
    int a;
    while (a != EOF)
    {  
        a = getchar(); 
        if(a == ' '){
            if(!found){
                putchar(a);
                found = 1;
            }
        }else {
            putchar(a);
            found = 0;
        }

    }
    return 0;
    
}