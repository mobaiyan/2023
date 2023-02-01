#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int get_max(int x, int y)//定义函数
//{
//	int z = 0;
//	if (x > y)
//		z = y;
//	else
//		z = y;
//	return z;//返回z值
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//调用函数
//	printf("max=%d\n", max);
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};//结构体
//
//int main()
//{
//	struct stu s = { "张三",20,67.5 };//结构体的创建和初始化
//	struct stu* ps = &s;
//	ps->age = 15;//可将变量s的年龄改为15
//	printf("%s %d %.1lf\n", ps->name, ps->age, ps->score);
//}

	  // void Swap(int* pa, int* pb)//用指针pa pb改变原函数a b的值
   //{
	  // int z = 0;
	  // z = *pa;
	  // *pa = *pb;
	  // *pb = z;
   //}

   //int main()
   //{
	  // int a = 10;
	  // int b = 20;
	  // Swap(&a, &b);//这样把地址传输过去 就可以建立起内外关系了
	  // //变量的值是外值 地址是内置
	  // return 0;
   //}