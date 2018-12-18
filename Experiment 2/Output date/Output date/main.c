//
//  main.c
//  Output date
//
//  Created by 刘天承 on 2018/10/19.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int day_number;
    int start_day;
    int i;
    
    printf("Enter number of days in month: ");
    scanf("%d",&day_number);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&start_day);
    
    for (i = 1; i < start_day; i++){
        printf("   ");
    }
    for (i = 1; i <= day_number; i++) {
        printf("%2d",i);
        if ( (start_day + i - 1) % 7 == 0) {
            printf("\n");
        }else if( i < day_number){
            printf(" ");//solve the first & second errors
        }
    }
    
    if( (start_day + day_number - 1) % 7 != 0){
        printf("\n");// solve the third error
    }
    return 0;
}

//总结：通过这道题弄明白了程序判定系统：+说明所在那行有错误
//-是说那行正确的应当是什么
//第一次错误：在第七列字母后不应该加空格
//第二次错误：最后一个数字即使不在第七列也不该有空格
//第三个错误：到第七列结束的情况输出了两个换行
//

