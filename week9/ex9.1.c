#include <stdio.h>

double kinestic(double mass, double velocity){
    return (mass * velocity * velocity)/ 2;
}
int main(){
    printf("%f", kinestic(1.0, 3.0));
}