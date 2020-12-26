#include <stdio.h>

int main() {
    int numOfBooks;
    int price = 50000;
    double VAT = 0.04;

    scanf("%d", &numOfBooks);
    printf("Price: %f", numOfBooks * price * (1-VAT));

    return 0;
}