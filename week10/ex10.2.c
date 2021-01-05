#include <stdio.h>

int main(){
    int arr[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < 4; i++){
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) sum += arr[i];
    }

    printf("%d\n", sum);
    return 0;
}