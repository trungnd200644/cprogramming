#include <stdio.h>

int sumcube (int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i*i*i;
    }
    return sum;
}

void submulti (int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0) printf("%d\n", i);
    }
    return;
}

void persquare (int n){
    for (int i = 1; i <= n; i++){
        printf("%d\n", i*i);
    }
    return;
}

int main(){
    int n = 9;
    printf("%d\n", sumcube(n));
    submulti(n);
    persquare(n);
}