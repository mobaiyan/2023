#include"game.h"
#include"game.c"//vscode要引用源文件才能找到头文件

void menu()
{
    printf("************************\n");
    printf("*********1.play*********\n");
    printf("*********0.exit*********\n");
    printf("************************\n");
}

void game()
{
    //创建数组
    char board[ROW][COL];
    //初始化棋盘 添加空格
    InitBoard(board,ROW,COL);
    //打印棋盘
    DisplayBoard(board,ROW,COL);

    while(1)//开始走棋
    {
        //玩家下棋
        Playmove(board,ROW,COL);
    }
}

int main()
{
    int input = 0;
    do
    {   
        menu();
        scanf("%d",&input);
        switch (input)
        {
            case 1: 
                game();
                break;
            case 0:
                printf("exit game");
                break;
            default: 
                printf("error choice");
                break;
        }
    } while (input);

    return 0;
}
