#include<stdio.h>
//շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	scanf("%d %d", &a, &b);
//	while (t = a % b)//C�����ж����� ��0Ϊ�� �������� 0Ϊ�� ����ѭ��
//		a�����Լ��ȡ�� �����0 ��������Ϊ�� �˳�����
//	{
//		a = b;
//		b = t;
//	}
//	printf("���Լ��%d\n", b);
//	return 0;
//}
//��һ������
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
			printf("���Լ���ǣ�%d", gcd);
			break;
		}
		gcd--;
	}
	return 0;
}
//��С������==��a*b��/���Լ��

//