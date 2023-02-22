#include<stdio.h>


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

void merge(int* nums1,int nums1Size,int m,int* nums2,int nums2Size,int n){
    for(int j = 0;j < nums2Size; j++){
        nums1[nums1Size - j - 1] = nums2[j];
    }
    quick_sort(nums1,0,nums1Size - 1);
    
}

int main(){
    int nums1[] = {1,2,12,0,0,0};
    int nums2[] = {2,5,6};

    int nums1Size = 6;
    int nums2Size = 3;
    
    int m = 3;
    int n = 3;

    merge(nums1,nums1Size,m,nums2,nums2Size,n);
    
    for(int i = 0;i < nums1Size; i++){
        printf("%d ",nums1[i]);
    }
    return 0;
}