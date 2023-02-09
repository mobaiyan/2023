#include <stdio.h>

int main()
{
    int a = 10;
    int *pa = &a;

    printf("%p\n", &a);
    printf("%d\n", *pa);

    return 0;
}