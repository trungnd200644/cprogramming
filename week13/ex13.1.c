#include<stdio.h>
#include<string.h>

int counter(char s[]){
    int count = 0;
    for (int i = 0; i < strlen(s); i++){
        if(s[i] == ' ') count++;
    }
    return count;
}

int main(){
    char s[20];
    printf("Enter text: ");
    scanf("%[^\n]", s);
    printf("Spaces counted: %d\n", counter(s));
    return 0;
}