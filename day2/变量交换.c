#include <stdio.h>

//定义两个变量a,b，交换变量a和b的值
int main()
{
    //定义变量并初始化
    int a = 5, b = 6;
    //声明临时变量存储a
    int c = a;
    //将变量b的值赋值给a
    a = b;
    //将原来a的值赋值给b
    b = c;
    printf("a=%d, b=%d", a, b);
    return 0;
}