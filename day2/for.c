#include <stdio.h>

//输入一个整数，计算它的阶乘
int main()
{
    int n;
    int ret = 1;
    printf("输入一个整数");

    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        ret *= i;
    }
    printf("%d的阶乘为%d", n, ret);
    return 0;
}