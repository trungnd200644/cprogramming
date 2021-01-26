#include <stdio.h>

typedef struct wt {
    int total_rain; // in mm
    int high_temp; // in celcius
    int low_temp;
}
weather;
const int MONTHS = 12;

int main() {
        weather data[MONTHS];
        int i;
        char months[12][12] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
        };
        int total_rain = 0;
        int max_temp = -100;
        int max_month = 0;
        int min_temp = 100;
        int min_month = 0;
        // read input data for each month
        for (i = 0; i < MONTHS; i++) {
            printf("Weather Data for %s: \n", months[i]);
            printf(" Total Rainfall (mm): ");
            scanf("%d", & data[i].total_rain);
            printf(" High Temperature (C): ");
            scanf("%d", & data[i].high_temp);
            printf(" Low Temperature (C): ");
            scanf("%d", & data[i].low_temp);
        }

        // find min, max temperature
        for (i = 0; i < MONTHS; i++) {
            total_rain += data[i].total_rain;
            if (max_temp < data[i].high_temp) {
                max_temp = data[i].high_temp;
                max_month = i;

            }
            if (min_temp > data[i].low_temp) {
                min_temp = data[i].low_temp;
                min_month = i;

            }
        }
        printf("\nWeather Statistic for the Year:\n"); 
        printf(" Total Rainfall: %d mm\n", total_rain); 
        printf(" Monthly Rainfall: %2.3f mm\n", (double)(total_rain) / MONTHS); 
        printf(" Highest Temperature: : %d° C in %s\n ", max_temp, months[max_month]); 
        printf(" Lowest Temperature: %d° C in %s\n ", min_temp, months[min_month]);
        return 0;
}