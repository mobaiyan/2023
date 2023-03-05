//
// Created by Zack on 2023/3/4.
//
#include <stdio.h>
#include <string.h>

//typedef int wc;
//typedef enum Status wzbd;


/*struct stu {
    int id;
    short age;
    char * name;
} student;*/
/*
void test(struct stu * stu) {
    stu->id = 14;
}
int main() {
    struct stu arr[] = {{11,12,"🐎"},
                        {12,12,"🐏"},
                        {13,12,"🐕"}};
    struct stu * p = arr;
    printf("%d\n",p->id);
    test(p);
    printf("%d\n",arr->id);
    return 0;
}*/

/*union Object {
    int a;
    char b;
    float c;
};*/

//enum Status { low = 1, medium = 2, high = 3 };

int main() {
    char tmp[20];
    scanf("%s",tmp);
    int x = strcmp(tmp, "than" );
    printf("%d\n",x);
    if(x) {
        printf("test");
    }
    return 0;
}
