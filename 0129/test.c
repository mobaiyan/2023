#include<stdio.h>
// int main()
// {
//     int i = 0;
//     int count = 0;
    
//     //数1--100的所有整数中出现多少次数字9
    

//     for(i = 1;i <= 100;i++)
//     { 
//         if (i % 10 == 9)
//             count++;
//         if (i/10 == 9)
//             count++;
//     }
//     printf("%d\n",count);
//     return 0;
// }

// int main()
// { 
//     int i = 0;
//     double sum = 0;
//     double n = 0;

//     //计算1/1 - 1/2 + 1/3 - 1/4 + 1/5....+ 1/99 - 1/ 100的值
//     //解法一
//     for(i = 1;i <= 100;i++)
//     {
//         n = 1.0 / i;
//         if (i % 2 != 0)
//         {
//             sum+=n;
//         }
//         else
//         {
//             sum-=n;            
//         }
//     }

    
     //解法二
//      i = 0;
//      n = 0;
//      sum = 0;
//      int flag = 1;//用flag操控加减
  
//      for(i = 1;i <= 100; i++)
//      {
//          sum +=flag*1.0/i;
//          flag = -flag;
//      }

//      printf("%lf\n",sum);

//      return 0;
//  }

int main()
{
    int i = 0;
    int n = 0;
    for(i = 1;i <= 9; i++)
    {
        for(n = 1;n <= i; n++)
        {
            printf("%d*%d=%2d ",n,i,n*i);
        }
        printf("\n");
    }
    return 0;
}