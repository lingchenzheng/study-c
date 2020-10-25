#include <stdio.h>

/*
typedef关键字：声明新的类型别名
typedef 原类型 别名
*/
typedef int Len; //给int取别名

//自定义日期类型
typedef struct date
{
    int year;
    int month;
    int day;
} Date;
int main(int argc, char const *argv[])
{
    Date d; //声明Date类型变量
    return 0;
}
