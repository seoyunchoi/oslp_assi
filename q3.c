#include<stdio.h>
void swap(int *pa, int *pb);

int main(){
    int a,b;

    printf("a에 넣을 정수를 입력하세요:");
    scanf("%d", &a);
    printf("b에 넣을 정수를 입력하세요:");
    scanf("%d", &b);

    printf("\nswap 전: a=%d, b=%d\n\n",a,b);

    swap(&a,&b);

    printf("swap 후: a=%d, b=%d\n\n",a,b); 
}


void swap(int *pa, int *pb){
    int temp;

    temp=*pa;
    *pa=*pb;
    *pb=temp;
}

