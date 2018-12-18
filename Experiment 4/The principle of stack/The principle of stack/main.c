//
//  main.c
//  Modify 10_2
//
//  Created by 刘天承 on 2018/12/10.
//  Copyright © 2018年 刘天承. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE 100

int contents [STACK_SIZE];
int top = 0;

void make_empty(void);//清空
bool is_empty(void);//判空
bool is_full(void);//判满
void push(char);//压栈
int pop(void);//弹出/使用

int main(int argc, const char * argv[]) {
    //函数主体//
    return 0;
}

//各函数的实现
void make_empty(void){
    top = 0;
}
bool is_empty(void){
    return top == 0;
}
bool is_full(void){
    return top == STACK_SIZE;
}
void push(char i){
    if (is_full())
        printf("stack_overflow");
    else
        contents[top++] = i;
}
int pop(void){
    if (is_empty())
        //stack_underflow()的讨论见下
        return false;
    else
        return contents[--top];
}
/*
 int pop(void){
    if (is_empty())
    --> stack_underflow(); <--
    else
        return contents[--top];
 }
 Error:Control may reach end of non-void function
 
 ltc: 同学们我想问一下：这个栈弹出函数如果判空了该怎么办？编译错误提示的意思就是可能没有返回值。比如说:a = pop()；假如这时候栈已经空了应该让它返回什么？不知道那个stack_underflow函数是怎么写的，教材里也没给。
 cw：stack_underflow()提示堆栈空，然后return空
 ltc：返回空不是只能用于void型的函数吗？可是这个函数是int类型的，else里还要返回数组元素呢
 cw：@刘天承 stack_underflow函数的实现，你思考的比较细。它被int pop()函数调用，因此它确实应该return int型的数据，这里可以让它返回一个表示异常的状态码
 */

