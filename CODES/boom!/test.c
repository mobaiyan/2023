#include "game.h"

void menu()
{
    printf("************************\n");
    printf("*********1.play*********\n");
    printf("*********0.exit*********\n");
    printf("************************\n");
}

void game()
{
    
}

int main()
{
    int input = 0;
    srand((unsigned)time(NULL));
    do
    {
        menu();
        printf("make a choice");
        scanf("%d", &input);
        switch (input)
        {
        case 1 /* constant-expression */:
            game();
            break; /* code */
        case 0:
            printf("over");
            break;
        default:
            printf("error");
            break;
        }
    } while (input);

    return 0;
}