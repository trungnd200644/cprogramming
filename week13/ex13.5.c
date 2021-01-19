#include<stdio.h>
#include<string.h>

void cut(char s[]){
    int found = 0;
    for (int i = 0; i < strlen(s); i++){
        if(s[i] == ' ') found = 1;
        if (found) s[i] = '\0';
    }
}

int main(){
    char name[20];
    scanf("%s", name);
    cut(name);
    printf("%s", name);

    return 0;
}