#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    printf("    %c    \n", a);
//    printf("   %c %c   \n", a, a);
//    printf("  %c %c %c  \n", a, a, a);
//    printf(" %c %c %c %c \n", a, a, a, a);
//    printf("%c %c %c %c %c\n", a, a, a, a, a);
//    return 0;
//}

//int main()
//{
//	char a;
//	int tmp = 0;
//	int m = 0;
//	int i = 0;
//	scanf("%c", &a);
//	for (i = 0; i <= 5; i++)
//	{
//		for (tmp = 0; tmp < 5 - i; tmp++)
//		{
//			printf(" ");
//		}
//		for (m = 0; m < i; m++)
//		{
//			printf("%c ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//    char a;
//    scanf("%c", &a);
//    for (int i = 1; i <= 5; i++)
//    {
//        for (int j = 5 - i; j > 0; j--)
//            printf(" ");
//        for (int m = 1; m <= i; m++)
//            printf("%c ", a);
//        printf("\n");
//    }
//    return 0;
//}


//int main() {
//	char a;
//	int tmp = 0;
//	int m = 0;
//	int i = 0;
//	a = getchar();
//	for (i = 1; i <= 5; i++)//������һ�Ƚ��뺯�� �������������ı� �����ȸı����� 
//	{
//		for (tmp = 0; tmp < 5 - i; tmp++) 
//		{
//			printf(" ");
//		}
//		for (m = 0; m < i; m++) {
//			printf("%c ", a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//    int i = 0;
//    char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int sz = 0;
//    sz = sizeof(arr) / sizeof(arr[1]);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//��д������������ѧ�����ݵĺ��� ����д������ ......
//struct message
//{
//    int year;
//    int mouth;
//    int date;
//};
//Take_struct(struct message x)
//{
//    static struct message x = { 0 }; 
//    struct message* pa = &x;
//    scanf("%4d%2d%2d", &pa->year, &pa->mouth, &pa->date);
//}
//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    struct message a = { 0 };
//    Take_struct(struct message a);
//    printf("year=%d\nmonth=%02d\ndate=%02d", a.year, a.mouth, a.date);
//    return 0;
//}