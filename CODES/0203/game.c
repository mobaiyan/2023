#include"game.h"


void InitBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for(i = 0;i < row; i++)//遍历数组 将数组内元素都初始化为' '
    {
        for(j = 0;j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for(i = 0;i < row; i++)//循环行数次
    {
        for(j = 0;j < col; j++)
        {
            printf(" %c ",board[i][j]);
            if (j < col - 1)
            {
                printf("|");
            }
        }

        if(i < row - 1)
        {
            int n = 0;
            printf("\n");
            for(n = 0;n < col; n++)
            {
                
                printf("---");
                if(n < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
        

    }
}

void Playmove(char board[ROW][COL],int row,int col)//玩家下棋
{
        
}
