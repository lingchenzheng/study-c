#include <stdio.h>

/*
* 浮点数
*/

int main()
{
    int foot, inch;
    printf("please input height");
    scanf("%d %d", &foot, &inch);
    //%f表示打印float类型
    //两个整数运算结果只能是整数，所以这里不能写成12
    printf("height=%f\n", (foot + inch / 12.0) * 0.3048);
    return 0;
}