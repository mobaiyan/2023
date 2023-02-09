// //
// // Created by zack on 2023/2/1.
// //
// #include<stdio.h>

// //实现冒泡排序
// void Bubble_sort(int arr[], int size)
// {
//     int i = 0;
//     int n = 0;
//     for (n = 0; n < size - 1; n++)
//     {
//         for (i = 0; i < size - 1 - n; i++)
//         {
//             int tmp = 0;
//             if (arr[i] > arr[i + 1])
//             {
//                 tmp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = tmp;
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
//     int i = 0;

//     int sz = sizeof(arr) / sizeof(arr[0]);

//     Bubble_sort(arr, sz);
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;   
// }