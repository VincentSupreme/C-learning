#include <stdio.h>

int main(void)
{
    /* 声明变量money和taxed_money并初始化，前者表示金额，后者表示税后的金额 */
    float money = 0.0f;
    float taxed_money = 0.0f;
    
    /* 金额录入 */
    printf("Enter an amount: ");
    scanf("%f", &money);
    
    /*计算税后的金额 */
    taxed_money = money * 1.05;
    
    /*显示结果，使用.2f是因为题目中税后的金额只保留了两位小数 */
    printf("With tax added: $%.2f\n", taxed_money);
    
    return 0;
}


//#include "stdio.h"
//
//int main(int argc, char const *argv[])
//{
//    float amount;
//    float amount_with_added;
//
//    printf("Enter an amount: “);
//    scanf("%f",&amount);
//    amount_with_added = amount * 1.05f;
//    printf("with tax added: $%.2f\n",amount,amount_with_added);
//
//    return 0;
//}
