//
//  main.c
//  Modify 10_2 0.0
//
//  Created by 刘天承 on 2018/12/16.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    int a = 0,b = 0,c = 0,d = 0;
    
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        switch (ch) {
            case '(':a++;break;
            case ')':b++;break;
            case '{':c++;break;
            case '}':d++;break;
            default:break;
        }
    }
    
    if((a == b) && (c == d)){
        printf("Parentheses/braces are nested properly\n");
    }else printf("Parentheses/braces are NOT nested properly\n");
    return 0;
}
/*皮一下，90分*/
