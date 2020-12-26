#include <stdio.h>

int main(void) {
    double heading; /* compass heading in degrees */

    /* Get compass heading. */
    printf("Enter a compass heading (0.0 - 360.0 degrees)> ");
    scanf("%lf", & heading);

    /* Display equivalent compass bearing. */
    if (heading < 0.0)
        printf("Error--negative heading (%.1f): must be between 0 and 360\ n ", heading);
    else if (heading < 90.0)
        printf("The bearing is north %.1f degrees east\n", heading);

    else if (heading < 180.0)
        printf("The bearing is south %.1f degrees east\n", 180.0 -
            heading);
    else if (heading < 270.0)
        printf("The bearing is south %.1f degrees west\n", heading -
            180.0);
    else if (heading <= 360.0)
        printf("The bearing is north %.1f degrees west\n", 360.0 -
            heading);
    else
        printf("Error--heading > 360 (%.1f): must be between 0 and 360\ n ", heading);

    return (0);
}