#include <stdio.h>

int main()
{
    int type;
    printf("请输入类型");

    scanf("%d", &type);

    switch (type)
    {
    case 1:
        printf("你好");
        break;
    case 2:
        printf("大家好");
        break;
    default:
        printf("睡觉");
        break;
    }
    return 0;
}