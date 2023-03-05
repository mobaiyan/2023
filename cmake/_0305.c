//
// Created by Zack on 2023/3/5.
//

#include <stdio.h>
#include <stdlib.h>
/*
struct stu{
    char name[20];
} student;

int main() {
    struct stu stu1 = {"sadsad"};
    stu1.name = "asdadw";
    printf("%s",stu1.name);
    return 0;
}*/

/*
int main() {
    int x = 1, y = 2, z = 3;
    x = (y/(z=4));
    int i = 0;
    float a[][2] = {{1,2,1},{13,3,3}};
    for (int i = 0; i < 4; ++i){
    if(1)
    printf("%d",i);}
    return 0;
}*/
typedef struct stu
{
    char ID[30];
    char name[20];
    int score[2];
} STU;
int fun(STU *d,int n)
{
    int i,m;
    /******found******/
    //______(1)______;
    for(i=1;i<n;i++)
    /******found******/
        if(d[i].score[0]+d[i].score[1]>d[i-1].score[0]+d[i-1].score[1])
            m=i;
    /******found******/
    return m;
}

void main()
{
    STU a[10]={ "2016500301","李清水",83,92,"2016500336","刘世才",85,94,"2016500371","王子晨",88,88};
    int i,n;
    scanf("%d",&n);
    int arr[n];
    i=fun(a,n);
    printf("%30s%20s%4d%4d",a[i].ID,a[i].name,a[i].score[0],a[i].score[1]);
    printf("\n");
}