#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 定义普通变量
    int a = 0;

    // 声明指针变量 , 并为其设置 NULL 初始值
    // NULL 就是 0
    int *p = NULL;

    // 声明二级指针变量 , 并为其设置 NULL 初始值
    int **p2 = NULL;

    // 将变量地址赋值给一级指针
    p = &a;

    // 打印一级指针地址
    printf("%d\n", p);

    // 将一级指针的地址赋值给二级指针
    p2 = &p;

    a = 200;
    // 间接修改指针的值
    

    // 打印一级指针地址
    printf("%d\n", *p);


    // 命令行不要退出
    system("pause");
    return 0;
}
