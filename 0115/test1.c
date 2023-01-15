#include<stdio.h>
//int Max(int ch[20])
//{
//    int max = 0;
//    int i = 0;
//    for (i = 0; i < 20; i++)
//    {
//        if (ch[i + 1] > ch[i])
//            max = ch[i + 1];
//        else max = ch[i];
//    }
//    return max;
//}
//int main()
//{
//    int max = 0;
//    int ch[20];
//    int a = 0, b = 0, c = 0;
//    int tmp = 0;
//    printf("input times with its");
//    scanf("%d", &a);
//    for (tmp = 0; tmp < a; tmp++)
//    {
//        getchar();
//        scanf("%d", ch[tmp++]);//数组[不能是变量 只能是常量]
//    }
//    printf("%d", max);
//    return 0;
//}
//怎么才能写一个可以不限制输入数数量的比大小的程序呢？ 
//数组的大小不能用变量

int Max(int a,int b,int c)
{
	int max = a;
	if (b > a) max = b;
	if (c > max)max = c;
	return max;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 1;
	int max = 0;
	int maxu = 0;
	int ch[] = { 0 };
	printf("Tips:exit----1 1 1\n");
	printf("if over input enter\n");
	do
	{
		printf("No.%d three numbers\n",i++);
		scanf("%d %d %d", &a, &b, &c);
		max = Max(a, b, c);
		if (max > maxu)
		{
			maxu = max;
			max = 0;
		}
		else max = 0;
	} while (a!=b||b!=c);
	printf("Max:%d\n", maxu);
	return 0;
}
//勉强能用 有点太复杂了 估计运行起来效率不是很高 等学深入了回头再重做个