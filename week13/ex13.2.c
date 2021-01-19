#include<stdio.h>
#include<string.h>

void replace(char s[], char a, char b){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == a) s[i] = b;
    }
}

int main(){
    char s[20], a, b;
    printf("Enter string: ");
    scanf("%s", s);
    printf("Enter character to replace: ");
    scanf(" %c", &a);
    printf("Enter character to replace with: ");
    scanf(" %c", &b);
    replace(s, a, b);
    printf("%s", s);

    return 0;
}