//
//  main.c
//  bill
//
//  Created by 刘天承 on 2018/10/13.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int amount;
    int cnt_20 = 0;
    int cnt_10 = 0;
    int cnt_5 = 0;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);
    
    while (amount / 20 != 0) {
        cnt_20 ++;
        amount -= 20;
    }
    while (amount / 10 != 0) {
        cnt_10 ++;
        amount -= 10;
    }
    while (amount / 5 != 0) {
        cnt_5 ++;
        amount -= 5;
    }
    
    printf("\n$20 bills: %d\n",cnt_20);
    printf("$10 bills: %d\n",cnt_10);
    printf(" $5 bills: %d\n",cnt_5);
    printf(" $1 bills: %d\n",amount);

    return 0;
}
