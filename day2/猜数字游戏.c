#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    //取余得到100以内的数
    int n = rand() % 100;
    //记录猜的次数
    int count = 0;
    //输入的数
    int x;
    printf("请开始猜测");
    do
    {
        printf("请输入一个数");
        count++;
        scanf("%d", &x);
        if (x > n)
        {
            printf("大了");
        }
        else if (x < n)
        {
            printf("小了") ；
        }
    } while (x != n);

    printf("恭喜你猜%d次猜对了", count);
    return 0;
}