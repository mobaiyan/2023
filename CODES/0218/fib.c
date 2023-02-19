#include<stdio.h>

// int Findfib(int* arr,int target)
// {
//     arr[0] = 1;
//     arr[1] = 1;

//     for(int i = 2;i < target; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }
//     return arr[target - 1];
// }


// int main(){
//     int target = 0;
//     scanf("%d", &target);

//     int arr[target - 1];

//     int fib = Findfib(arr , target);
//     printf("%d", fib);
//     return 0;
// }

int fib(int n){
    if(n <= 1){
        return 1;//如果是第一个或第二个元素 都是1
    }
    else{
        return fib(n - 1) + fib(n - 2);//递归
    }
}

int main(){

    printf("%d",fib(5));
    return 0;
}