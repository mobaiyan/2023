#include<stdio.h>
//今日学习函数递归
// int main()
// {
//     printf("haha\n");
//     main();//自己调用自己 每次调用都会打印 变成死递归�?
//     return 0;
// }
//接受一个整形符（无符号），按照循序打印它的每一位数? 
//例如 输入 1234 输出 1 2 3 4
// void print(unsigned int x)
// {
//     if(x > 9)
//     {
//         print(x / 10);//只要没取到x的第一位 就一直调用自己
//                       //代码调用完成后 执行 调用函数后面的语句
//     }
//     printf("%d ",x % 10);//在调用后面 可以实现正着输出
// }

// int main()
// {
//     unsigned int num = 0;
//     scanf("%u",&num);//%u是无符号整形的表示?
//     print(num);//print函数可以打印参数部分数字的每一位?
//     return 0;
// }

