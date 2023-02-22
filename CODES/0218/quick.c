#include<stdio.h>
#include<string.h>

// void quick_sort(int* arr,int l,int r){
//     if(l >= r) return;
//     int right = r;
//     int base = arr[l];
//     while(l < r){
//         while(l < r && base < arr[r]){
//             r--;
//         }
//         arr[l] = arr[r];
//         while(l < r && base > arr[l]){
//             arr[r] = arr[l];
//         }
        
//     }
//     arr[r] = base;

//     quick_sort(arr,l,r - 1);
//     quick_sort(arr,r + 1,right);
    
// }

// int main(){
//     int arr[] = {5,6,1,3,54,21,2,42,6,13};
//     int r = sizeof(arr)/sizeof(arr[0]) - 1;//数组右侧下标
//     quick_sort(arr,0,r);
//     for(int i = 0;i < 10; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// void quicksort(int* arr,int left,int right){
//     int l = left;//每个数组最左边下标
//     int r = right;//每个数组最右边下标
//     if(l >= r){
//         return;
//     }
//     int base = arr[l];
//     while(left < right){
//         while(left < right && arr[left] <= base){
//             left++;
//         }
//         arr[left] = arr[right];
//         while (left < right && arr[right] > base){
//             right--;
//         }  
//         arr[right] = arr[left];      
//     }
//     arr[right] = base;

//     quicksort(arr,l,right - 1);
//     quicksort(arr,right + 1,r);
// }

// int main(){
//     int arr[] = {5,6,1,3,54,21,2,42,6,13};
//     int right = sizeof(arr)/sizeof(arr[0]);

//     quicksort(arr,0,right);

//     for(int i = 0;i < right; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

#include <stdio.h>

#define SIZE 6

void quick_sort(int* arr,int low,int high){

    if(low >= high){//如果传入的左大于等于右 就说明递归结束
        return;
    }

    int l = low;//左下标
    int h = high;//右下标    

    int base = arr[low];//基准

    while(l != h){
        while(arr[l] <= base && l < h){
            l++;//向右查找
        }
        while(arr[h] >= base && h > l){
            h--;//向左查找
        }

        if(h > l){
            int tmp = arr[h];
            arr[h] = arr[l];
            arr[l] = tmp;
        }
    }

    //base找到该待的位置
    arr[low] = arr[l];
    arr[l] = base;

    //继续分开排
    quick_sort(arr,low,l - 1);
    quick_sort(arr,l + 1,high);

}

int main()
{
    //创建一个数组
    int num[SIZE] ={0};
    int i;

    //输入数字
    for(i =0; i < SIZE; i++)
    {
        scanf("%d",&num[i]);
    }

    quick_sort(num, 0, SIZE-1);

    for(i = 0; i < SIZE; i++)
    {
        printf(" %d ", num[i]);
    }

    return 0;
}

