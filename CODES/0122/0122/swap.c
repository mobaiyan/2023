#define _CRT_SECURE_NO_WARNINGS 1
void Swap(int* x, int* y)
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}