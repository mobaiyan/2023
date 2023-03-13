//
// Created by Zack on 2023/3/10.
//
#include <stdio.h>

int main() {

    typedef struct {
        int age;
        int id;
        char * name;
    } stu;
    stu stu1 = {10,123,"na"};
    int *p = &stu1;
    
    return 0;
}