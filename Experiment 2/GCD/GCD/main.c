//
//  main.c
//  GCD
//
//  Created by 刘天承 on 2018/10/19.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m,n,b,GCD;
    printf("Enter two integers: ");
    scanf("%d %d",&m,&n);
    
    if( n > m ){
        b = m ;
        m = n ;
        n = b ;
    }// m>n
    
    while (n > 0) {
        b = m % n;
        m = n;
        n = b;
    }
    GCD = m;

    printf("Greatest common divisor: %d\n",GCD);
    return 0;
}
