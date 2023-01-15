#include<stdio.h>
int Max(int ch[20])
{
    int max = 0;
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        if (ch[i + 1] > ch[i])
            max = ch[i + 1];
        else max = ch[i];
    }
    return max;
}
int main()
{
    int max = 0;
    int ch[20];
    int a = 0, b = 0, c = 0;
    int tmp = 0;
    printf("input times with its");
    scanf("%d", &a);
    for (tmp = 0; tmp < a; tmp++)
    {
        getchar();
        scanf("%d", ch[tmp++]);
    }
    printf("%d", max);
    return 0;
}