#include<stdio.h>
#include<string.h>

int strend(char s[], char t[]){
    int j = 0;
    for(int i = strlen(s) - strlen(t); i < strlen(s); i++){
        if (s[i] != t[j++]) return 0;
    }
    return 1;
}

int main(){
    char s[20], t[20];
    scanf("%s", s);
    scanf("%s", t);
    printf("%d", strend(s, t));

    return 0;
}