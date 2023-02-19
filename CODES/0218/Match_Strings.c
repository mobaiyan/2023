#include <stdio.h>
#include <string.h>

// > 现有两个字符串
// > - `str1 = "abcdabbc";`
// > - `str2 = "cda";`
// > - 设计一个 C 语言程序 判断第一个字符串是否包含了第二个字符串

// 1 暴力算法
int main(){
    char str1[] = "abcdabbc";
    char str2[] = "cdsa";

    int size1 = strlen(str1);
    int size2 = strlen(str2);
    _Bool flag = 0;


    for (int i = 0; i < size1; i++){
        flag = 0;//重置判断条件
        for (int j = 0; j < size2; j++){//走完循环 flag没变1 就说明从这个i开始比 后面都一样
            if (str1[i + j] != str2[j]){//j从0开始 如果str1[i + 0] != str2[0] 那么直接break 后面的也不会比了
                flag = 1;
                break;
            }
        }
        if(!flag) break;
    }
    puts(flag ? "不包含":"包含");
    return 0;
}