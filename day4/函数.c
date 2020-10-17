#include <stdio.h>

/*
函数顺序，在调用前声明
如果不按顺序，则需提前声明
*/
void f(); //函数的原型声明
int max(int a, int b);
int main()
{
    f();
    int m = max(12, 34);
    return 0;
}

void f()
{
    printf('f');
}

int max(int a, int b)
{
    return a > b ? a : b;
}