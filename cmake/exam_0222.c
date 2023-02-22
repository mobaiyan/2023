//
// Created by Zack on 2023/2/22.
//

#include <stdio.h>
#include <stdbool.h>

bool findNumberIn2DArray(int** matrix, int matrixSize, int * matrixColSize, int target){
    if(matrixSize == 0 || *matrixColSize == 0) return false;

    int x = *matrixColSize;//列
    int y = 0;//行

    while (x > 0 && y < matrixSize) {
        if (target >= matrix[y][x]) {//比target大就继续向左小的找
            x--;
        } else if (target <= matrix[y][x]) {//比target小了 就向下找
            y++;
        } else {
            return true;
            //如果一样就跳出循环
        }
    }

    return false;
}

int main(){

    int target = 5;

    findNumberIn2DArray();
    return 0;
}