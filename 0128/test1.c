#include<stdio.h>
//1月27日 我的manjaro又出问题了 所以又修了一天 哎.....
int my_strlen(char * str)//arr代表的是数组的首个字符的地址
                        //所以用个指针存放
{
    if(*str!='\0')//*解引用指针后就是数组元素本身了
        return 1+ my_strlen(str+1);//这里相当于0+1+1+1
        //函数递归三次 最后一次return 0 不再进行递归
        //递归结束时的return回到了主函数内
    else
        return 0;
}
// int main()
// {
//     char arr[]="hello";
//     printf("%d\n",my_strlen(arr));//这里接收递归完成后的值
//     return 0;
// }

int Fac(int x)
{
    if (x <= 1)
        return 1;
    else
    {
        return x * Fac(x-1);
    }
}

// int main()
// {
//     int n = 0;
//     scanf("%d",&n);

//     int ret = Fac(n);

//     printf("%d",ret);
//     return 0;
// }

int main()
{

    return 0;
}