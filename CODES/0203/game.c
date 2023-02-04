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
    printf("\n");
}

void Playmove(char board[ROW][COL],int row,int col)//玩家下棋
{
    int i = 0;
    int n = 0;

    //初始化坐标
    int x = 0;
    int y = 0;
    while(1)
    {
        printf("enter the cooddinaties\n");
        scanf("%d %d",&x,&y);//接收坐标

        if(x - 1 < row && y - 1 < col )//判断接收的坐标是否在棋盘内部
        {
            if(board[x - 1][y - 1] != '*'&& board[x - 1][y - 1] != '#') //判断该坐标有没有被占用
            {
                board[x - 1][y - 1] = '*';//玩家*棋
                break;//下完一步 跳出while循环
            }
            else
            {
                printf("address conflict");
            }
        } 
        else
        {
            printf("error,re-enter\n");
        }
    }
}


void ComputerMove(char board[ROW][COL],int row,int col)
{
    //获取两个随机值x
    int x = rand() % ROW;
    int y = rand() % COL;
    printf("computer turns\n");
    while(1)
    {
        //随机值取3的余数 余数一定小于被除数 比如10%3的余数是1 假设是4 4能除3 所以是1 ...
        x = rand() % NUM;
        y = rand() % NUM;
        if(board[x][y] != '*' && board[x][y] != '#')//判断有无冲突
        {
            board[x][y] = '#';//电脑#棋
            break;
        }
    }
}


char JudgeWin(char board[ROW][COL],int row,int col)
{

    //列的判断
    int i = 0;
    int count = 0; //每列符合元素的计数器
    int count_f = 1;//每列连续元素的计数器

    for(i = 0;i < col; i++)//把每列分开
    {   
        count = 0;
        int j = 0;
        for(j = 0;j < row; j++)//找到每行第一个元素
        {
            //i列的第j行元素
            if(board[j][i] == '*')
            {
                count++;
            }
        }
        if(count >= NUM)//一列中 有大于条件的元素 但不确定是否连续
        //接下来判断是否连续
        {
            int n = 1;
            for(n = 1;n < row; n++)//列出这列的每个元素
            {
                if(board[n -1][i]==board[n][i])//上一行的i列元素与下一列相等
                {
                    count_f++;
                    if(count_f == NUM)
                    {
                        goto flag;
                    }
                }
                else
                {
                    count_f = 1;
                }
                
            } 
        }
        if(count_f == NUM)
        {
            flag:
                return '*';//如果满足条件
        }      
    }
}   

void PrintWinner(char board[ROW][COL],int row,int col)//输出胜者
{
    while(1)//开始走棋
    {
        //玩家下棋
        Playmove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        if(JudgeWin(board,ROW,COL) == '*')
        {
            printf("gamer wins\n");
            break;
        }
        
        //电脑下棋
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        if(JudgeWin(board,ROW,COL) == '*')
        {
            printf("gamer wins\n");
            break;
        }
    }

}

