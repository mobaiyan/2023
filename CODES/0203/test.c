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
    //输出胜者
    PrintWinner(board,ROW,COL);
}

int main()
{
    srand((unsigned)time(NULL));
    int input = 0;
    do
    {   
        menu();
        printf("choose the options\n");
        scanf("%d",&input);
        switch (input)
        {
            case 1: 
                game();
                break;
            case 0:
                printf("exit game\n");
                break;
            default: 
                printf("error choice\n");
                break;
        }
    } while (input);

    return 0;
}
