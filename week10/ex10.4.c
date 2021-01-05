#include <stdio.h>

void desSort(int arr[5]);
void oddDesSort(int arr[5]);

int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    oddDesSort(arr);
    for(int i = 0; i < 5; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
    desSort(arr);
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}

void desSort(int arr[5]){
    int temp;
    for (int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++){
            if(arr[j] > arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void oddDesSort(int arr[5]){
    int temp;
    for (int i = 0; i < 5; i++){
        for (int j = i; j < 5; j++){
            if(arr[j] > arr[i] && arr[i] % 2 != 0 && arr[j] % 2 != 0){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}