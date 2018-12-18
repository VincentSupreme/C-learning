//
//  main.c
//  Transform the grade to level
//
//  Created by 刘天承 on 2018/10/19.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    
    printf("Enter numerical grade: ");
    scanf("%d",&num);
    
    int a = num / 10;
    char grade;
    
    if ( num > 100 || num < 0) {
        printf("Error, grade must be between 0 and 100.\n");
    }else{
        switch (a) {
            case 9: case 10:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
                break;
        }
        printf("Letter Grade: %c\n",grade);
    }
    
    return 0;
}
