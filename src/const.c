#include <stdio.h>

/*
* const是一个修饰符，表示常量，被const修饰的变量不能被修改
*/
int main()
{
    const int MAX_NUM = 100;
    // MAX_NUM = 200 不允许
    printf("max=%d", MAX_NUM);
    return 0;
}