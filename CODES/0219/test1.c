#include<stdio.h>

int main(){
    int a , b , c;
    int* arr[] = {&a, &b, &c};//数组内存放的是变量地址

    *arr[0] = 521;//取到指针数组中第一个元素 并解引用赋值
    printf("%d",a);

    int* *ppa = arr;
    **ppa[2] = 22;

    printf("%d",c); 


    return 0;
}