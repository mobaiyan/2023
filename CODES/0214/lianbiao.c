#include<stdio.h>
#include<stdlib.h>

struct List{
    int capacity;//数组的容量/长度
    int * array;//指向顺序表的底层数组
    int size;//表内元素数量
};

int initList(struct List* list){
    list->array = malloc(sizeof(int) * 10);//malloc动态申请内存(这里申请了10个内存空间) 让数组array内存可变
    if(list->array == 0) return 0;
    list->capacity = 10;
    list->size = 0;
    return 1;
}

int main(){
    struct List list;
    if(initList(&list) == 1){
        printf("success");
    }
    else{
        printf("初始化失败");
    }
	return 0;
}