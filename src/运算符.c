#include <stdio.h>
/*
表达式是一系列运算符和算子的组合，用来计算一个值
+加
-减
*乘
/除
=赋值
*/
int main()
{
    //写一个程序，输入两个整数，输出它们的平均值
    int a, b;
    scanf("%d %d", &a, &b);
    double c = (a + b) / 2.0;
    printf("%f", c);
    return 0;
}

void f()
{
}