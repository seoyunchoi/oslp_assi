#include<stdio.h>

int main(){
    int i=0, j, k;
    int *pi=&i;

    printf("포인터 pi의 값은 %d로 지정됐습니다\n\n", *pi);

    for (j=1; j<=1000; j++){
            (*pi)++;
            printf("%d  ", *pi);
        if(j%10==0)
            printf ("\n");
    }
}       
