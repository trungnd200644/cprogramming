#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char input[20];
    printf("Enter text: ");
    scanf("%s", input);
    int wrongformat = 1;
    if(strlen(input) != 7) wrongformat = 0;
    else{
        for (int i = 0; i < strlen(input); i++){
            if(i < 3){
                if(!isalpha(input[i])) wrongformat = 0;
            }
            if(i >= 3){
                if(!isdigit(input[i])) wrongformat = 0;
            }
        }
    }
    if(!wrongformat) printf("Wrong format\n");
    else printf("Right format\n");

    return 0;
}