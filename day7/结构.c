#include <stdio.h>

int main(int argc, char const *argv[])
{
    //声明一个结构
    struct date
    {
        int year;
        int month;
        int day;
    };
    //声明一个date类型的变量
    struct date d;
    d.year = 2020;
    d.month = 10;
    d.day = 16;
    //声明结构类型并初始化
    struct date d2 = {2020, 10, 16};
    //声明结构类型并初始化
    struct date d3 = {.year = 2020, .month = 10};
    //声明一个匿名结构并且声明一个变量point
    struct
    {
        int x;
        int y;
    } point;
    point.x = 32;
    point.y = 45;

    //或者
    struct point
    {
        int x;
        int y;
    } p1, p2;

    return 0;
}
