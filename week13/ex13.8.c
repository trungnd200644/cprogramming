#include<stdio.h>
#include<string.h>

int main(){
    char punc[] = {",.;:!?"};
    char s[80];
    scanf("%[^\n]", s);

    for(int i = 0; i < strlen(s); i++){
        for(int j = 0; j < strlen(punc); j++){
            if (s[i] == punc[j]) {
                s[i] = ' ';
                break;
            }
        }
    }
    printf("%s", s);

    return 0;
}