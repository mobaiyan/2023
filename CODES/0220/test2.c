#include<stdio.h>

// int main(){
//     int arr[] = {1,2,3};
//     int arr2[2][3] = {{1,2,3},{4,5,6}};

//     int (*pa)[3] = &arr;
//     int (*ppa)[3] = arr2;

//     ppa[1][2] = 0;
//     arr2[1][2] = 10;
//     printf("%d\n",(*pa)[0]);
//     printf("%d\n",*(*(ppa + 1)+2));
//     printf("%d\n",ppa[1][2]);

//     return 0;
// }

// int* test(int* a){//接收值和返回值都是指针
//     return a;
// }

// int main(){

//     int a = 20;
//     printf("%d" ,*test(&a));//将地址传输进去
//     return 0;
// }


int sum(int (*p)(int,int),int a, int b){
    return p(10,20);
}

int sumImply(int a, int b){
    return a + b;
}

int main(){

    int (*p)(int,int) = sumImply;

    int result = sum(p,10,20);
    printf("%d", result);
    return 0;
}