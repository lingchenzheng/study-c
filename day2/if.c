#include <stdio.h>

/*
    输入成绩，判断等级
    90-100:A
    80-90:B
    70-80:C
    60-70:D
    60以下:E
*/
int main()
{
    int num = 0;
    printf("请输入成绩");

    scanf("%d", &num);

    if (num >= 90)
    {
        printf("你的成绩为A");
    }
    else if (num >= 80)
    {
        printf("你的成绩为B");
    }
    else if (num >= 70)
    {
        printf("你的成绩为C");
    }
    else if (num >= 60)
    {
        printf("你的成绩为D");
    }
    else
    {
        printf("你的成绩为E");
    }
    return 0;
}