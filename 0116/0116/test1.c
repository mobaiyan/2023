#include<stdio.h>
#include<math.h>
//打印1000-2000的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i >= 1000 && i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0)||i%400==0)	
//				printf("%d ", i);
//	}
//	return 0;
//}

//打印100--200的素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//			//判断i是否为素数 
//			//从2开始除 判断是否能整除
//		{
//			if (i % j == 0)//真：被整除 所以就不是素数
//			{
//				break;
//			}
//		}
//		if (i == j)//判断是break出去的还是循环结束出去的
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//优化方法方法：一个数如果能被整除i=a*b 那么a b之间一定至少有一个数<=i的开平方
//比如16 = 2 * 8 = 4 * 4 2小于4
//在这里使用[sqrt开平方函数](sqrt开平方.md)求出开平方结果
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i += 2)
	{
		int j = 0;
		int flag = 1;//重置flag
		for (j = 2; j <= sqrt(i); j++)
			//判断i是否为素数
			//从2--开平方开始除 判断是否能整除
		{
			if (i % j == 0)//真：被整除 所以就不是素数
			{
				flag = 0;//在这个if中更改flag的值 如果等于0 说明if成立
				break;
			}
		}
		if (flag==1)//通过flag 判断是break出去的还是循环结束出去的
		{
			printf("%d ", i);
		}
	}
	return 0;
}