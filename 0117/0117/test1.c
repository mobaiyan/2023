#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//flag:
//	printf("ceshi1\n");
//	printf("ceshi2\n");
//
//	goto flag;
//	return 0;
//}

int main()
{
	char ch[20];
	char tmp[20] = { "caosinidema" };
	strcpy(ch, tmp);
	printf("%s", ch);
}