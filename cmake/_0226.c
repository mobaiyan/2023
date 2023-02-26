#include <stdio.h>
#include <stdbool.h>

/*
int main() {
    int input;
    bool flag = true;
    scanf("%d",&input);

    for (int i = 2; i < input/2; i++) {
        if (input % 2 == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        printf("是质数");
    } else {
        printf("不是质数");
    }
    return 0;
}*/

int main() {
    int budge = 100;
    bool flag = true;
    int count = 0;
    for(int i = 2;i < budge; i++) {
        for (int j = 2; j <= i; j++) {
            if (i%j == 0 && j != i) {
                flag = false;
                break;
            }
        }
        if (flag) {
            printf("%4d ",i);
            count++;
        }
        if (count % 10 == 0) {
            printf("\n");
        }
        flag = true;
    }

    return 0;
}