#include <stdio.h>
#include <stdbool.h>
//声明一个日期结构
struct date
{
    int year;
    int month;
    int day;
};
bool isLeap(struct date d);
int monthOfDays(struct date d);
int main(int argc, char const *argv[])
{
    struct date d;
    scanf("%i %i %i", &d.year, &d.month, &d.day);
    int days = monthOfDays(d);
    return 0;
}

//这种传递是拷贝了一份结构的值
bool isLeap(struct date d)
{
    bool leap = false;
    if (d.year % 4 == 0 || d.year % 100 == 0 || d.year % 400 == 0)
    {
        leap = true;
    }
    return leap;
}

int monthOfDays(struct date d)
{
    int days;
    const int dayList[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (d.month == 2 && isLeap(d))
    {
        days = 29;
    }
    else
    {
        days = dayList[d.month - 1];
    }
    return days;
}
