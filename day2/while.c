#include <stdio.h>

int main()
{
    //计算1到100的和
    int sum = 0, i = 1;
    while (i <= 100)
    {
        sum += i;
    }
    printf("sum=%d", sum);
    return 0;
}