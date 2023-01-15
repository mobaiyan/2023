//测试拉取
#include<stdio.h>
//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d %d", &a, &b);
//	while (t = a % b)//C语言判断条件 非0为真 继续运行 0为假 结束循环
//		a和最大公约数取余 结果是0 所以条件为假 退出程序
//	{
//		a = b;
//		b = t;
//	}
//	printf("最大公约数%d\n", b);
//	return 0;
//}
//另一种做法
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int gcd = 0;
	if (a > b)
		gcd = b;
	else
		gcd = a;
	while (1)
	{
		if (a % gcd == 0 && b % gcd == 0)
		{
			printf("最大公约数是：%d", gcd);
			break;
		}
		gcd--;
	}
	return 0;
}
//最小公倍数==（a*b）/最大公约数

//
