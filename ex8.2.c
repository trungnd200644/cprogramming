#include <stdio.h>

int main(){

    int a;
    while (a != EOF)
    {   
        a = getchar();
        if (a == '\t' || a == '\b'){
            putchar('\\');
        }else
        {
            putchar(a);
        }
        

    }
    return 0;
    
}