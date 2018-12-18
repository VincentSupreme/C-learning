//
//  main.c
//  Translation
//
//  Created by 刘天承 on 2018/10/24.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>
int main()
{
    char a[100];
    printf("Enter phone number: ");
    scanf("%s",a);
    
    int i;
    for(i = 0;a[i]!=0;i++){
        switch (a[i]){
            case'A':case'B':case'C':
                printf("2");break;
            case'D':case'E':case'F':
                printf("3");break;
            case'G':case'H':case'I':
                printf("4");break;
            case'J':case'K':case'L':
                printf("5");break;
            case'M':case'N':case'O':
                printf("6");break;
            case'P':case'Q':case'R':case'S':
                printf("7");break;
            case'T':case'U':case'V':
                printf("8");break;
            case'W':case'X':case'Y':case'Z':
                printf("9");break;
            default :printf("%c",a[i]);
        }
    }
    printf("\n");
    return 0;
}

