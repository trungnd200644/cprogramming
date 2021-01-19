#include<stdio.h>

void mycopy(char des[], char source[]){
    for(int i = 0; source[i] != '\0'; i++){
        des[i] = source[i];
    }
}

int main(){
    char des[100], source[100];
    scanf("%[^\n]", source);
    mycopy(des, source);
    printf("%s", des);

    return 0;
}