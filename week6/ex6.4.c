#include <stdio.h>

int main() {
    int age;

    /* Get age from user */
    printf("\nEnter an age : ");
    scanf("%d", & age);

    /* Figure out which bracket they are in */
    if (age <= 0 || age >= 125) {
        printf("That's not a valid age");
    } else {
        printf("\nIt is classed as : ");

        if (age > 0 && age < 18) printf("A Child\n");
        else if (age > 18 && age < 65) printf("An Adult\n");
        else printf("A Senior Citizen\n");
    }

    return (0);

}