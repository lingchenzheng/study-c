#include <stdio.h>

int main()
{
    int a = 12;
    char b = '1';
    double c = 1.234;
    float d = 2.12f;
    printf("a=%d,b=%c,c=%lf,d=%f", a, b, c, d);
    return 0;
}

/*
自动类型转换
当运算符两边出现不一致的类型时，会自动转换成较大的类型
char -> short -> int -> long -> long long
int -> float -> double
对于printf来说，任何小于int类型的都会转换成int,float会转换成double
对于scanf来说不会，需要输入short，需要%hd

强制类型转换（存在安全性）
通常将大的类型转换成小的类型
*/
void f()
{
    //自动转换
    int a = 2;
    double c = 2 / 1.0;

    //强制转换
    int b = (int)10.345;
}