#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int binary_search(int a[], int k, int s)//�з���ֵ ���Ǹ�����
{
	int left = 0;
	int right = s - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;//Ҫд��ѭ���� ��Ȼmid�Ͳ���ı�
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
			return mid;//����mid��ֵ
	}
	return 0;

}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int key = 0;
	scanf("%d", &key);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);//������̫�� �������������
	if (ret == 0)//����ֱ���ж��ҵ�ʱ������ �����ж��Ҳ���ʱ������
	{
		printf("�Ҳ���");
	}
	else
		printf("�ҵ��±�Ϊ%d", ret);
	return 0;
}