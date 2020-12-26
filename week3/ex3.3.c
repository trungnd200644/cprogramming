#include <stdio.h>

int main(void) {
    char name[16]; /* string to hold name */

    printf("What's your name? ");
    scanf("%15s", name);
    printf("Hi there, %s!\n", name);
    return 0;
}