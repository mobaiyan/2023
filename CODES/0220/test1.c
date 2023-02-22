#include<stdio.h>

int main(){

    int a = 400;
    int* pa = &a;

    int* *ppa = &pa;

    * *ppa = 200;
    printf("%d ",a);
    printf("%d ",*pa);
    printf("%d ",* *ppa);
    return 0;
}