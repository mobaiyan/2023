#include<stdio.h>


/* 汉诺塔问题是一个经典的问题。
> 汉诺塔（Hanoi Tower），又称河内塔，源于印度一个古老传说。
> 大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着 64 片黄金圆盘。
>大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。
> 并且规定，任何时候，在小圆盘上都不能放大圆盘，且在三根柱子之间一次只能移动一个圆盘。问应该如何操作？*/

int Han_move(int* stone1,int* stone2,int* stone3,int h)
{
    
    
    if(stone2[0] != 0){
        return 0;
    }
    Han_move(stone1,stone2,stone3,--h); 
    return 1;
}

void initArr(int* stone,int flag)
{   
    if(!flag){
        for(int i = 0;i < 64; i++){
            stone[i] = i + 1;
        }
    }
    else{
        for(int i = 0;i < 64; i++){
            stone[i] = 0;
        }
    }

}

int main()
{
    int heigth = 64; 


    int stone1[heigth];
    int stone2[heigth];
    int stone3[heigth];
    
    initArr(stone1,0);
    initArr(stone2,1);
    initArr(stone3,1);



    Han_move(stone1,stone2,stone3,heigth - 1);

    for(int i = 0;i < 64; i++){
        printf("%d ",stone2[i]);
    }
    return 0;
}