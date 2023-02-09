#include"game.h"

#include"game.c"//vscode要引用源文件才能找到头文件

void menu()
{
    printf("************************\n");
    printf("*********1.play*********\n");
    printf("*********0.exit*********\n");
    printf("************************\n");
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
