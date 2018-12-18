//
//  main.c
//  Reversal
//
//  Created by 刘天承 on 2018/12/16.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch[100];
    int a;
    int i = 0;
    
    printf("Enter a message: ");
    while ((a = getchar()) != '\n') {
        ch[i++] = a;
    }
    
    printf("Reversal is: ");
    while (i > 0) {
        printf("%c",ch[--i]);
    }
    printf("\n");
    
    return 0;
}
