//
// Created by Zack on 2023/3/12.
//
#include <stdio.h>
#include <stdlib.h>

//1. 在单链表头部插入元素

struct Node {
    int data;
    struct Node * next;
};

struct Node* head;

//插入链表函数
void insert(int x) {
    struct Node* tmp = (struct Node*)malloc(sizeof(struct Node));
    tmp->data = x;
    tmp->next = head;
    head = tmp;
}

//输出链表元素
void print() {
    struct Node* tmp = head;
    printf("list is --- ");
    while(tmp != NULL) {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

int main() {
    /*创建个单链表
     * 1.创建int型链表 -DONE
     * 2.创建头指针 -DONE
     * //利用循环插入和输出
     * 3.编写插入函数
     * -. tmp存放一块动态分配的内存的地址
     * -. 为data数据插入实参n
     * -. next指向原头指针指向的地址
     * -. head指针存放现tmp存放的地址
     * 4.编写输出函数*/
    head = NULL;
    int n , x;
    printf("how much elements in your link list?\n");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i){
        printf("insert--");
        scanf("%d", &x);
        insert(x);
        print();
    }
    printf("done");
    return 0;
}