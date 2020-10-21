#include <stdio.h>
#include <stdbool.h>

/*
如果结构比较大，传入指针比拷贝更加高效
*/
struct date
{
    int year;
    int month;
    int day;
};
struct date *getDate(struct date *d);
int main(int argc, char const *argv[])
{
    //定义日期类型
    struct date d;
    //定义日期类型指针
    struct date *p = &d;
    //调用函数，传入p
    struct date *q = getDate(p);
    printf("year=%d\n", q->year);

    //修改返回的指针所指向的值
    *q = (struct date){2019, 11, 11};

    printf("p->year=%d,p->month=%d\n", p->year, p->month);
    printf("q->year=%d,q->month=%d\n", q->year, q->month);
    printf("d.year=%d,d.month=%d\n", d.year, d.month);

    return 0;
}
struct date *getDate(struct date *d)
{
    (*d).year = 2020;
    d->month = 10;
    d->day = 22;
    return d;
}
