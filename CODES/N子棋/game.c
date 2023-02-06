#include"game.h"

void game()//游戏主体
{
    //创建数组
    char board[ROW][COL];
    //初始化棋盘 添加空格
    InitBoard(board,ROW,COL);
    //打印棋盘
    DisplayBoard(board,ROW,COL);
    //输出胜者
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
        if (JudgeWin(board,ROW,COL) == '#')
        {
            printf("computer wins\n");
            break;            
        }
    }
}

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
    printf("computer turns\n");
    while(1)
    {
        //随机值取3的余数 余数一定小于被除数 比如10%3的余数是1 假设是4 4能除3 所以是1 ...
        int x = rand() % ROW;
        int y = rand() % COL;

        if(board[x][y] != '*' && board[x][y] != '#')//判断有无冲突
        {
            board[x][y] = '#';//电脑#棋
            break;
        }
    }
}


char JudgeWin(char board[ROW][COL],int row,int col)//判断胜者
{
    int j = 0;//循环时 代表列的计数
    int i = 0;//循环时 代表行的计数
    int count_P = 0;//玩家的计数器
    int count_C = 0;//电脑的计数器
    //列的判断
    for(j = 0;j <= ROW; j++)
    {
        count_C = 0;//电脑
        count_P = 0;//玩家
        for(i = 0;i <= COL; i++)
        {
            if(board[i][j] == '*' )
            {
                count_C = 0;
                count_P++;
            }
            else if(board[i][j] == '#')
            {
                count_P = 0;
                count_C++;
            }
            else
            {
                count_C = 0;
                count_P = 0;
            }
            if(count_P == NUM)
            {
                return '*';
            }
            else if (count_C == NUM)
            {
                return '#';
            }
        }
    }
    
    //行的判断
    for(i = 0;i <= COL; i++)
    {
        count_C = 0;
        count_P = 0;
        for(j = 0;j <= ROW; j++)
        {
            if(board[i][j] == '*' )
            {
                count_C = 0;
                count_P++;
            }
            else if(board[i][j] == '#')
            {
                count_P = 0;
                count_C++;
            }
            else
            {
                count_C = 0;
                count_P = 0;
            }
            if(count_P == NUM)
            {
                return '*';
            }
            else if (count_C == NUM)
            {
                return '#';
            }
        }
    }

    //对角线的判断
    //不会了...
    
    for(i = 0;i <= COL; i++)
    {
        int tmp = i;
        for(j = tmp;j <= ROW; j++)
        {
            if(board[tmp][j] == '*')
            {
                count_P++;
            }
            else
            {
                count_P = 0;
            }
            tmp++;
            
            if (count_P == NUM)
            {
                return '*';
            }
        }

    }
}   

