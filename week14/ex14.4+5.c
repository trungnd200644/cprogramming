#include <stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct fraction {
    int numerator;
    int denominator;
}fraction;

void fractionInput(fraction * ps);
void fractionOutput(fraction ps);
void fractionArrayInput(fraction dsps[], int n);
void fractionArrayOutput(fraction dsps[], int n);
int fractionCmp(fraction ps1, fraction ps2);
fraction inverse(fraction ps);
void inverseArray(fraction dsps[], int n);
fraction fractionSimple(fraction ps);
fraction fractionSum(fraction ps1, fraction ps2);
fraction fractionMultiply(fraction ps1, fraction ps2);

void fractionInput(fraction * ps) {
    int n, d;
    printf("Numerator:");
    scanf("%d", & n);
    ps -> numerator = n;
    do {
        printf("Denominator:");
        scanf("%d", & d);
    } while (d == 0);
    ps -> denominator = d;
}
void fractionArrayInput(fraction dsps[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Data input for the %d-th fraction:\n", i + 1);
        fractionInput(&dsps[i]);
    }
}

void fractionOutput(fraction ps) {
    printf(" %d/%d ", ps.numerator, ps.denominator);
}
void fractionArrayOutput(fraction dsps[], int n) {
    int i;
    printf("Data output for the array of fraction: \n ");
        for (i = 0; i < n; i++) {
            fractionOutput(dsps[i]);
        }
        printf("\n");
    }

    fraction inverse(fraction ps) {
        fraction tmp;
        if (ps.numerator == 0) {
            printf("Can not have an inverse fraction of 0!\n");
            exit(1);
        }
        tmp.numerator = ps.denominator;
        tmp.denominator = ps.numerator;
        return tmp;
    }
    int fractionCmp(fraction ps1, fraction ps2) {
        // long smd = (ps1.numerator * ps2.denominator - ps2.numerator * ps1.denominator) * ps1.denominator * ps2.denominator;
        // if (smd > 0) return 1;
        // else if (smd < 0) return -1;
        // else return 0;
        double d = (double)ps1.numerator / ps1.denominator - (double)ps2.numerator / ps2.denominator;
        if(d > 0) return 1;
        else if (d < 0) return -1;
        else return 0;
    }

    void inverseArray(fraction dsps[], int n) {
        int i;
        for (i = 0; i < n; i++) {
            dsps[i] = inverse(dsps[i]);
        }
    }

    fraction fractionSimple(fraction ps){
        fraction result;
        int maxDivider = 1;
        for(int i = 1; i <= ps.denominator || i <= ps.numerator; i++){
            if(ps.numerator % i == 0 && ps.denominator % i == 0) maxDivider = i;
        }
        result.denominator = ps.denominator / maxDivider;
        result.numerator = ps.numerator / maxDivider;
        return result;
    }

   fraction fractionSum(fraction ps1, fraction ps2){
       fraction result;
       result.numerator = ps1.numerator * ps2.denominator + ps1.denominator * ps2.numerator;
       result.denominator = ps1.denominator * ps2.denominator;
       result = fractionSimple(result);
       return result;
   }
   
   fraction fractionMultiply(fraction ps1, fraction ps2){
       fraction result;
       result.numerator = ps1.numerator *  ps2.numerator;
       result.denominator = ps1.denominator * ps2.denominator;
       result = fractionSimple(result);
       return result;
   }
    int main() {
        int n;
        fraction a[MAX], max, s, p;
        printf("Enter the number of fractions:");
        scanf("%d", & n);
        fractionArrayInput(a, n);
        fractionArrayOutput(a, n);
        printf("Inverse all fractions in the array.\n");
        inverseArray(a, n);
        fractionArrayOutput(a, n);
        printf("Enter first fraction to compare:\n");
        fractionInput(&s);
        printf("Enter second fraction to compare:\n");
        fractionInput(&p);
        if (fractionCmp(s, p) == 0)
            printf("Two fractions are equals.\n");
        else if (fractionCmp(s, p) < 0) {
            fractionOutput(s);
            printf("is smaller than");
            fractionOutput(p);
            printf("\n");
        }
        printf("Enter first fraction to add:\n");
        fractionInput(&s);
        printf("Enter second fraction to add:\n");
        fractionInput(&p);
        printf("Sum: %d/%d\n",fractionSum(s, p).numerator, fractionSum(s, p).denominator);
        printf("Enter first fraction to multiply:\n");
        fractionInput(&s);
        printf("Enter second fraction to multiply:\n");
        fractionInput(&p);
        printf("Product: %d/%d\n",fractionMultiply(s, p).numerator, fractionMultiply(s, p).denominator);
        return 0;
    }
