//
//  main.c
//  Number of display II
//
//  Created by 刘天承 on 2018/11/11.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>
//改编自P165页8.1.3程序  利用数组元素自增来计数
int main(int argc, const char * argv[]) {
    
    int cnt[10] = {0};//初始化
    long number ; //长整型的范围更大 对应%ld
    int digit;
    
    printf("Enter a number: ");
    scanf("%ld",&number);
    
    if (number == 0) {
        cnt[0] = 1;
    }else{
        while ( number != 0 ){
            digit = number % 10;
            cnt[digit] ++;
            number /= 10;
        }
    }
    
    printf("Digit:\t\t");
    for (digit = 0; digit < 9; digit ++) {
        printf("%d  ",digit);
    }
    //最后一个9为什么要拿到下面呢，还不是sb格式要求
    //最后那个9之后要求不能用空格
    printf("9\nOccurrences:\t");
    for (digit = 0; digit < 10; digit ++) {
        printf("%d  ",cnt[digit]);
    }
    
    printf("\n");
    return 0;
}
