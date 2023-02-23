#include<stdio.h>
#include <math.h>


int main(){
    int scan = 0;
    int i = 0, count = 0;
    int sum = 0; 
    int saveScan[256] = {0};
    scanf("%d",&scan);
    int back_scan = scan;
    while (back_scan > 0) {
        back_scan /= 10;
        count++;
    }
    int back_count = count;

    while (scan > 0 && count >= 0) {
        if (scan % 2 == 0){
            saveScan[count - 1] = 0;
            count = count - 1;
        } else {
            saveScan[count - 1] = 1;
            count = count - 1;
        }
        i++;
        scan /= 10;
        sum += saveScan[count - 1] * pow(10,i -1);
    }

    printf("%d", sum);

    
    return 0;
}