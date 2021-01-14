#include <stdio.h>

void getSale(int *arr, int size){
    for(int *p = arr; p < arr + size; p++){
        scanf("%d", p);
    }
}

int totalSale(int *arr, int size){
    int sum = 0;
    for(int *p = arr; p < arr + size; p++){
        sum += *p;
    }

    return sum;
}

int main(){
    int size;
    printf("Type the number of sales: ");
    scanf("%d", &size);

    int sales[size];
    printf("Type in the sales:\n");
    getSale(sales, size);

    printf("Total: %d\n", totalSale(sales, size));

    return 0;
}