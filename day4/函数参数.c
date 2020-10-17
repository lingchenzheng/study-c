#include <stdio.h>

/*
1. 如果函数所传参数于声明的参数类型不匹配，编译器会默认转换参数
2. 函数参数的传递是值的传递
3. 每个函数有自己的变量空间，参数也独立于这个空间，与其它函数没有关系
4. 在函数里不能定义另一个函数，但是可以定义另一个函数的声明
5. main函数建议加上参数void
*/
void test(int a)
{
    printf(a);
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    double x = 2.3;
    test(x); //打印2

    int a = 1;
    int b = 2;
    swap(a, b);
    printf("a=%d,b=%d", a, b); //a=1,b=2
    return 0;
}
