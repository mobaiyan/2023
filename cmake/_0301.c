//
// Created by Zack on 2023/3/1.
//
#include <stdio.h>

int main() {
    //1.创建数组 键入数组元素
    int m , n;
    printf("输入m和n\n");
    scanf("%d %d",&m,&n);
    //2.合并两个数组

    //3.快速排序时间数组递增

    //4.遍历输出数组

    return 0;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int i = m - 1, j = n - 1;
    for (int k = m + n - 1; k >= 0; k--) {
        if(i < 0) {
            *(nums1 + k) = *(nums2 + j--);
        } else if(j < 0) {
            *(nums1 + k) = *(nums1 + i--);
        } else {
            if(*(nums1 + i) > *(nums2 + j)) {
                *(nums1 + k) = *(nums1 + i--);
            } else {
                *(nums1 + k) = *(nums2 + j--);
            }
        }
    }
}