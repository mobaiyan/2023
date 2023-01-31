#include <stdio.h>

//1.
//思考运算符
// int main()
// {
//     int i = 0,a=0,b=2,c =3,d=4;
//     i = a++ && ++b && d++;
//     //i = a++||++b||d++;
//     printf("a = %d\n b = %d\n c = %d\nd = %d\ni = %d\n", a, b, c, d, i);
//     return 0;
// }
//&&遇到假时 后面的表达式不再执行
//||遇到真时 后面的表达式不再执行


// int main()
// {
// 	int a = 0;
// 	int b = 7;
// 	printf("!%d = %d\n", a, !a);
// 	printf("!%d = %d\n", b, !b);


// 	printf("&a = %p\n", &a);
// 	printf("&b = %p\n", &b);

// 	printf("%u\n", sizeof(int));
// 	printf("%u\n", sizeof(a));
// 	printf("%u\n", sizeof a);//true
// 	//printf("%u\n", sizeof int); //error sizeof后面不接括号，不能接类型名,但是可以接变量名
	
//     printf("%d\n",~0);//-1 -- 二进制的每一位按位取反
// 	return 0;
// }   


// int main()
// {
// 	int a = 1;
// 	int b = 2;
// 	int c = (a > b, a = b + 10, a, b = a + 1);
// 	printf("%d\n", c);
// 	return 0;
// }

//2.
//计算一个数的每位之和(用递归实现)
//如 调用DigitSum(1729) 应该返回1+7+2+9 和为19

 int DigitSum(int x)
 {
 	//>0多递归一次 效率低
 	// if(x > 0)
 	// {
 	// 	return DigitSum(x / 10) + (x % 10);//input的最后一位
 	// }
 	if(x > 9)
 	{
 		return DigitSum(x / 10) + (x % 10);//input的最后一位
 	}
 	else
 	{
 		return x;
 	}
 }

 int main()
 {
 	int input = 0;
 	scanf("%d",&input);

 	DigitSum(input);

 	printf("输入:%d,输出:%d\n",input,DigitSum(input));
 	return 0;
 }