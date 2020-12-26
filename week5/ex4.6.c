#include <stdio.h>

int main() {
    double regWages, basePay = 25000, regHours = 40.0, otWages, otPay = 40000, otHours = 10, totalWages;
    regWages = basePay * regHours;
    otWages = otPay * otHours;
    totalWages = regWages + otWages;
    printf("\n Wages for this week are %0.1f $", totalWages);
    return 0;
}