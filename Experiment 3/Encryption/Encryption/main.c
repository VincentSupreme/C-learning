//
//  main.c
//  Encryption
//
//  Created by 刘天承 on 2018/11/12.
//  Copyright © 2018年 刘天承. All rights reserved.
// 65_90 97_122

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char message[100];
    int i = 0,cnt = 0,digit;
    printf("Enter message to be encrypted: ");
    
    while ((message[i]=getchar()) != '\n') {
        i++;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d",&digit);
    
    
    for (cnt = 0; cnt <= i; cnt++) {
        if(message[cnt] >= 'A' && message[cnt] <= 'Z'){
            message[cnt] = ((message[cnt] - 'A') + digit) % 26 + 'A';
        }else if(message[cnt] >= 'a' && message[cnt] <= 'z'){
            message[cnt] = ((message[cnt] - 'a') + digit) % 26 + 'a';
        }
    }
    
    printf("Encrypted message: ");
    for (cnt = 0; cnt <= i; cnt++) {
        printf("%c",message[cnt]);
    }
    
    return 0;
}
