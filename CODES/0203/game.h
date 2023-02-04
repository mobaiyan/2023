#include<stdio.h>


//符号的定义
#define ROW 3
#define COL 3



//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋
void Playmove(char board[ROW][COL],int row,int col);
