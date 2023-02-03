#include<stdio.h>
#include "game.h"
void menu()
{
    printf("************************\n");
    printf("*********1.play*********\n");
    printf("*********0.exit*********\n");
    printf("************************\n");
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
            case1: game();
            case0: break;
            default: 
                printf("error choice");
        }
    } while (input);

    return 0;
}