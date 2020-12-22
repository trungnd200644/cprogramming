#include <stdio.h>

int is_prime(int n){
    for (int i = 2; i < n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;
    scanf("%d", &num);

    for(int i = 2; i <= num; i++){
        if (i == 2)
        {
            printf("%d\n", i);
        }else{
            if (is_prime(i))
            {
                printf("%d\n", i);
            } 
        }
              
    }
    return 0;
}