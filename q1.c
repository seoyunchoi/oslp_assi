#include<stdio.h>
double average(arg_1, arg_2);
double avg;

int main() {
    double num_1, num_2;

    printf("첫번째 실수를 입력하세요: ");
    scanf("%lf", &num_1);
    printf("두번째 실수를 입력하세요: ");
    scanf("%lf", &num_2);

    avg=average(num_1, num_2);

    printf("두 실수의 평균값은 %lf 입니다. \n", avg);
}

double average(double arg_1, double arg_2){
    avg = (arg_1+arg_2)/2;

    return(avg);
}
