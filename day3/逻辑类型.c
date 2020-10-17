#include <stdio.h>
#include <stdbool.h>
/*
C本来没有bool类型，需要引入一个头文件stdbool.h
之后就可以使用bool，true和false
*/
int main()
{
    bool flag = false;
    bool yes = 6 > 7;
    printf("%d", flag);
    printf("%d", yes);
    return 0;
}