#include<stdio.h>
#include<stdlib.h>
#include "time.h"

//符号的定义
#define ROW 4  //行
#define COL 4  //列
#define NUM 3  //几子棋


//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋
void Playmove(char board[ROW][COL],int row,int col);

//电脑下棋
void ComputerMove(char board[ROW][COL],int row,int col);

//判断输赢
char JudgeWin(char board[ROW][COL],int row,int col);

//打印输赢
void PrintWinner(char board[ROW][COL],int row,int col);
