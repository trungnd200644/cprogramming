#include <stdio.h>

void reverseArrIndex(int a[], int size){
    int temp;
    for(int i = 0; i < size / 2; i++){
        temp = a[i];
        a[i]= a[size - 1 -i];
        a[size - 1 -i] = temp;
    }
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
}

void reverseArrPointer(int a[], int size){
    int temp;
    for(int i = 0; i < size / 2; i++){
        temp = *(a + i);
        *(a + i)= *(a + size - 1 - i);
        *(a + size -1 -i) = temp;
    }

    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int size;
    printf("Size: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++){
        printf("a[%d]", i);
        scanf("%d", &arr[i]);
    }
    reverseArrIndex(arr, size);
    printf("\n");
    reverseArrPointer(arr, size);
    
    return 0;
}