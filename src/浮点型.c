#include <stdio.h>

/*
 浮点数double,float
 double表示双精度
 float表示单精度
*/

int main()
{
    int foot, inch;
    printf("please input height");
    scanf("%d %d", &foot, &inch);
    //%f表示打印浮点类型类型
    //两个整数运算结果只能是整数，所以这里不能写成12
    printf("height=%f\n", (foot + inch / 12.0) * 0.3048);

    //输入浮点数，使用%lf
    double f;
    scanf("%lf", f);
    return 0;
}