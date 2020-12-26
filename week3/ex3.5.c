#include <stdio.h>

int main(){
    int numOfOvernight, numOfThreeDays, numOfWeekly;
    scanf("%d", &numOfOvernight);
    scanf("%d", &numOfThreeDays);
    scanf("%d", &numOfWeekly);

    printf("Total cost is: $%d", 7*numOfOvernight + 5*numOfThreeDays + 3*numOfWeekly);

    return 0;
}