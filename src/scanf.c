#include <stdio.h>

/*
* scanf标准输入函数
*/
int main()
{
    int num;
    //提示输入
    printf("please input a number");
    //输入一个数字
    scanf("%d", &num);
    //打印输入的数字
    printf("num=%d", num);

    //两个输入输出
    int a, b;
    printf("please input two number");
    scanf("%d %d", &a, &b);
    printf("a+b=%d", a + b);
    return 0;
}