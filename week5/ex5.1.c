#include <stdio.h>

/* printf, scanf definitions*/
int main(void) {
    double miles, /* distance in miles */
    kms; /* equivalent distance in kilometers */
    /* Get the distance in kilometers. */
    printf("Enter the distance in kilometers > ");
    scanf("%lf", & kms);
    /* Convert the distance to miles. */
    miles = 1000 * kms;

    /* Display the distance in miles. */
    printf("That equals %f miles.\n", miles);
    return (0);
}