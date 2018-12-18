//
//  main.c
//  Date Format Convention
//
//  Created by 刘天承 on 2018/10/13.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int day;
    int month;
    int year;
    printf("Enter a date (mm/dd/yyyy): ");
/*如果%d没有/跟着他就会自动读取下一个
 加了/就只有输入/才会读取下一位）*/
    scanf("%d/%d/%d",&month,&day,&year);
/* %m.pg
 %m表示宽度（整数）：
    如果%0m则用0部位 如果没有则用空格部位
 %.p小数点位数（对于浮点数）
 g表示类型   */
    printf("You entered the date %d%02d%02d\n",year,month,day);
    return 0;
}
