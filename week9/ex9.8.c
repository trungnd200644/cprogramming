#include <stdio.h>

void getJudgeData(int *s);
void calcScore(int s1, int s2, int s3, int s4, int s5);

int main(){
    int s1, s2, s3, s4, s5;
    getJudgeData(&s1);
    getJudgeData(&s2);
    getJudgeData(&s3);
    getJudgeData(&s4);
    getJudgeData(&s5);

    calcScore(s1, s2, s3, s4, s5);

    return 0;
    
}

void getJudgeData(int *s){
    scanf("%d", s);   
}

void calcScore(int s1, int s2, int s3, int s4, int s5){
    int max = s1; 
    int min = s1;

    if(s2 > max) max = s2;
    if(s3 > max) max = s3;
    if(s4 > max) max = s4;
    if(s5 > max) max = s5;

    if(s2 < min) min = s2;
    if(s3 < min) min = s3;
    if(s4 < min) min = s4;
    if(s5 < min) min = s5;

    printf("%f\n", ((s1+s2+s3+s5+s4)-min-max)/(double)3);
}