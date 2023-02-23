//
// Created by Zack on 2023/2/23.
//
#include <stdio.h>

//int main() {
//
//    int scan = 0;
//    int count = 0;
//
//    scanf("%d",&scan);
//    int tmp = scan;
//    while (tmp > 0) {
//        tmp /= 10;
//        count++;
//    }
//    int sizeScan = count;
//    int saveScan[] = { 0 };
//
//    while (count > 0) {
//        if (scan % 10 % 2 == 0){
//            saveScan[count--] = 0;
//        } else if (scan % 10 % 2){
//            saveScan[count--] = 1;
//        }
//        scan /= 10;
//    }
//
//    for (int i = 0;i < sizeScan; i++){
//        printf("%d",saveScan[i]);
//    }
//
//    return 0;
//}
//void change_num(int scan){
//    if (scan <= 0) return;
//    if (scan % 2 == 0) {
//        printf("%d",0);
//    } else {
//        printf("%d",1);
//    }
//    change_num(scan / 10);
//}
//
//int main(){
//    int scan = 0;
//    scanf("%d",&scan);
//
//    change_num(scan);
//
//    return 0;
//}

int main(){
    int scan = 0;
    int i = 0, count = 0;
    int saveScan[] = {0};
    scanf("%d",&scan);
    int back_scan = scan;
    while (back_scan > 0) {
        back_scan /= 10;
        count++;
    }
    int back_count = count;

    while (scan > 0 && count > 0) {
        if (scan / (10 * i) % 2 == 0){
            *(saveScan + count--) = 0;
        } else {
            *(saveScan + count--) = 1;
        }
        i++;
    }

    for (int j = 0;j < back_count; j++) {
        printf("%d",saveScan[j]);
    }
    return 0;
}
