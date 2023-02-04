//
// Created by zack on 2023/2/1.
//
#include "stdio.h"

int main()
{
    int i = 0;
    int n = 0;

    char ch[][5] = {"fuck","you","life"};
    for(i = 0;i < 3;i++)
    {
        for(n = 0;n < 5;n++)
        {
//            printf("%c",ch[i][n]);
            printf("%d",ch[i][n]);
            printf("&ch[%d][%d] = %p\n",i ,n, &ch[i][n]);
        }
       // printf("\n");
    }
    return 0;
}