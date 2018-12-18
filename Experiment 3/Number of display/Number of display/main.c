//
//  main.c
//  Number of display
//
//  Created by 刘天承 on 2018/11/11.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num,last;
    int n0 = 0,n1 = 0,n2 = 0,n3 = 0,n4 = 0,n5 = 0,n6 = 0,n7 = 0,n8 = 0,n9 = 0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if ( num == 0){
        n0 = 1;
    }else{
        for(int i = 0; num != 0; i++){
            last = num % 10;
            num /= 10;
            switch (last) {
                case 0:n0++;break;
                case 1:n1++;break;
                case 2:n2++;break;
                case 3:n3++;break;
                case 4:n4++;break;
                case 5:n5++;break;
                case 6:n6++;break;
                case 7:n7++;break;
                case 8:n8++;break;
                case 9:n9++;break;
            }
        }
    }
    
    printf("Digit:\t\t0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:\t%d  %d  %d  %d  %d  %d  %d  %d  %d  %d  \n",n0,n1,n2,n3,n4,n5,n6,n7,n8,n9);
   
    return 0;
}
