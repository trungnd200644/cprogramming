#include <stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
}
date;

date input_date() {
    date tmp;
    do {
        printf("The day (between 1 and 31):");
        scanf("%d", & tmp.day);
    } while ((tmp.day < 1) || (tmp.day > 31));
    do {
        printf("The month (between 1 and 12):");
        scanf("%d", & tmp.month);
    } while ((tmp.day < 1) || (tmp.day > 12));
    do {
        printf("The year (between 1 and 10000):");
        scanf("%d", & tmp.year);
    } while ((tmp.day < 1) || (tmp.day > 1000));

    return tmp;
}

int datecmp(date d1, date d2) {
    if (d1.year < d2.year) return -1;
    else if (d1.year > d2.year) return 1;
    else {
        if (d1.month < d2.month) return -1;
        else if (d1.month > d2.month) return 1;
        else {

            if (d1.day < d2.day) return -1;
            else if (d1.day > d2.day) return 1;
            else return 0;

        }
    }
}

int main() {
    date date1, date2;
    int m;
    printf("Enter the first date.\n");
    date1 = input_date();
    printf("Enter the second date.\n");
    date2 = input_date();
    m = datecmp(date1, date2);
    if (m == 0) printf("Two date are identical.\n");
    else if (m < 0) printf("%d/%d/%d is before %d/%d/%d\n", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year);
    else printf("%d/%d/%d is after %d/%d/%d\n", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year);
    return 0;
}