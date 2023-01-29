#include<stdio.h>

// 翻转输出字符串
// void reverse_string(char * str)
// {
//     if(*(str)!= '\0')
//     {
//         reverse_string(str + 1);
//     }
//     printf("%c",* str);
    
// }

// int main()
// {
//     char arr[] = "abcdef";

//     reverse_string(arr);
//     return 0;
// } 

// void reverse_string(char * str,char swap)
// {
//     if(* str != '\0')
//     {
//         swap = *(str+1);
//         * (str+1) = *str;
//         * str = swap;
//         reverse_string(str,swap);
//     }
// }



int main()
{
    char arr[] = "abcdef";
    char swap = arr[0];
    reverse_string(arr,swap);
    printf("%s\n",arr);
    return 0;
}