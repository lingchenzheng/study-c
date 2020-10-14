#include <stdio.h>

/*
*int表示整型，一般占 4个字节，也就是32位。（根据编译器不同有所不同）
*%d是一个占位符，表示要打印整数
*/
int main()
{
    int a = 2309;
    //打印变量a的值
    printf("%d\n", a);
    //打印int的长度
    //sizeof函数打印类型或变量的大小
    printf("%d\n", sizeof(int));
    return 0;
}