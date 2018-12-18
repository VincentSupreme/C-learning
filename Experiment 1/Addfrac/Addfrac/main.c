//
//  main.c
//  Addfrac
//
//  Created by 刘天承 on 2018/10/14.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&a,&b,&c,&d);
    
    int numerator = a*d +b*c;
    int denominator = b*d ;
    printf("The sum is %d/%d\n",numerator,denominator);
    return 0;
}
