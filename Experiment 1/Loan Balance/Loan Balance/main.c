//
//  main.c
//  Loan Balance
//
//  Created by 刘天承 on 2018/10/13.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float loan = 0.00f;
    float rate;
    float payment = 0.00f;
    float first = 0.00f;
    float second = 0.00f;
    float third = 0.00f;

    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);
    
    float mouthrate = (rate/1200)+1;
    
    loan *= mouthrate;
    first = loan - payment;
    loan = first * mouthrate;
    second = loan - payment;
    loan = second * mouthrate;
    third = loan - payment;
    
    printf("\nBalance remaining after first payment: $%.2f\n",first);
    printf("Balance remaining after second payment: $%.2f\n",second);
    printf("Balance remaining after third payment: $%.2f\n",third);

    

    return 0;
}
