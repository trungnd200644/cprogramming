#include <stdio.h>

double* maximum(double* a, int size){
    if (a == NULL) return NULL;
    else{
        double *pmax;
        pmax = a;
        for(int i = 0; i < size; i++){
            if (*(a + i) > *pmax) pmax = a + i;
        }
        return pmax;
    }
}

int main(){
    double arr[6] = {2.4, 2.6, 7.2, 4.7, 73.4, 5.2};
    printf("%.1f", *maximum(arr, 6));

    return 0;
}
