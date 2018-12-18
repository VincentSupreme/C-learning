//
//  main.c
//  Wind Speed
//
//  Created by 刘天承 on 2018/10/18.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float speed;
    
    printf("Enter a wind speed: ");
    scanf("%f",&speed);
    //本题输入的风速不是整数，故不能使用switch case
    //即使是输入整数，那也需要63个case，很麻烦
    if (speed < 1)
        printf("Calm");
    //else if的条件其实不用再重复上一步中的，因为如果
    //到了else if 说明它肯定大于1
    else if (speed >= 1 && speed <= 3)
        printf("Light air");
    else if ( speed <= 27)
        printf("Breeze");
    else if ( speed <= 47)
        printf("Gale");
    else if ( speed <= 63)
        printf("Storm");
    else if ( speed >= 63)
        printf("Hurricane");
    
    printf("\n");
    
    return 0;
}
