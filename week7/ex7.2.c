#include <stdio.h>

int main(){
    int i, j, k;

    for(i = 1; i <= 10; i = i + 1){
        for(j = 1; j <= i; j = j + 1){
            printf("*");
        }
        printf("\n");
    }

    int h = 9;
    for (i = 0; i < h; i++){
        for(k = 0; k < h - i; k++){
            printf(" ");
        }
        for(j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
        
        printf("\n");
    }

    for (i = 0; i < h; i++){\
        if (i == h - 1){
            for (k = 0; k < 2 * h - 1; k++){
                printf("*");
            }
        }else{
            for (j = 0; j < 2 * h; j++){
                if (j == h - 1 - i || j == h - 1 + i){
                    printf("*");
                }else printf(" ");
            }
        }
        printf("\n");
    }
    return 0;


}
