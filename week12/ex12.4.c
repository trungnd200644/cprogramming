#include <stdio.h>

int main(){
    int size;
    printf("Size: ");
    scanf("%d", &size);
    int a[size];
    for(int i = 0; i < size; i++){
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++){
        for(int j = i; j < size; j++){
            printf("\n");
            for (int k = i; k <= j; k++){
                printf("%d ", a[k]);
            }
        }
    }
    return 0;
}