#include <stdio.h>

enum COLOR
{
    RED,
    YELLOW,
    PINK
};
//RED:0  YELLOW:1  PINK:2
void f(enum COLOR c);
int main(int argc, char const *argv[])
{
    int color = 1;
    switch (color)
    {
    case RED:
        printf("red\n");
        break;
    case YELLOW:
        printf("yellow\n");
        break;
    case PINK:
        printf("pink\n");
        break;
    default:
        printf("unknow");
    }

    //定义一个COLOR类型
    enum COLOR c = RED;
    f(c);

    return 0;
}

//使用定义的枚举类型
void f(enum COLOR c)
{
}