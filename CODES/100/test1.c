/*题目：有 1、2、3、4 四个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？*/

#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;
    int j = 0;
    int x = 0;
    for (i = 1; i <= 4; i++)
    {
        for (n = 1; n <= 4; n++)
        {
            for (j = 1; j <= 4; j++)
            {
                if (i != n && n != j && i != j)
                {
                    printf("%d ", i * 100 + n * 10 + j);
                }
            }
        }
        printf("\n");
    }

    return 0;
}