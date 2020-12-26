#include <stdio.h>

int main() {
    int age;
    /* Get age from user */
    printf("\nEnter an age : ");
    scanf("%d", & age);
    /* Figure out which bracket they are in */
    if (age > 0) {
        printf("\nIt is classed as : ");
        if (age < 18)
        
        printf("\nA Child\n");
        else if (age >= 65)

            printf("\nA Senior Citizen\n");

        else

            printf("\nAn Adult\n");

    } else
        printf("That's not a valid age");

    return;
}