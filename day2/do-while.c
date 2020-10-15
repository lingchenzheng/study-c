#include <stdio.h>

int main()
{
    int x = 0, n = 0;
    scanf("%d", &x);
    //do-while先执行一次循环体
    do
    {
        n++;
        x = x / 10;
    } while (x > 0);
    printf("输入的数有%d位", n);
    return 0;
}
