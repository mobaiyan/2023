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

void quicksort(int* arr,int left,int right){
    int l = left;//每个数组最左边下标
    int r = right;//每个数组最右边下标
    if(l >= r){
        return;
    }
    int base = arr[l];
    while(left < right){
        while(left < right && arr[left] <= base){
            left++;
        }
        arr[left] = arr[right];
        while (left < right && arr[right] > base){
            right--;
        }  
        arr[right] = arr[left];      
    }
    arr[right] = base;

    quicksort(arr,l,right - 1);
    quicksort(arr,right + 1,r);
}

int main(){
    int arr[] = {5,6,1,3,54,21,2,42,6,13};
    int right = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr,0,right);

    for(int i = 0;i < right; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
