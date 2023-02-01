#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int binary_search(int a[], int k, int s)//有返回值 且是个整型
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//要写在循环内 不然mid就不会改变
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;//返回mid的值
	}
	return 0;

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int key = 0;
	scanf("%d", &key);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);//函数名太长 创个变量方便点
	if (ret == 0)//不好直接判断找到时的条件 就先判断找不到时的条件
	{
		printf("找不到");
	}
	else
		printf("找到下标为%d", ret);
	return 0;
}