#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//找素数
#include<math.h>
//int Find(int x)
//{
//	int flag = 0;
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 1;
//			break;
//			//这里面直接return也可以结束函数
//		}
//	}
//	if (flag == 1)
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int t = 0;
//	scanf("%d", &t);
//	if (Find(t) == 0)
//		printf("%d是素数", t);
//	else
//		printf("不是素数");
//	return 0;
//}
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0)||(x%400==0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

