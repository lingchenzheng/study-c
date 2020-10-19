#include <stdio.h>

//指针与const
int main(int argc, char const *argv[])
{
    //1.指针是const
    int i = 2;
    int *const q = &i; //q是const，表示q的值不能被改变，q的地址被固定为i的地址值
    *q = 3;            //OK，修改q保存的地址所指向的变量的值
    //q++; //ERROR，修改q保存的地址值

    //2.指针指向的变量是const
    const int *p = &i; //表示不能通过指针来修改它所指向地址的值
    //*p = 34; //ERROR
    int j = 5;
    p = &j;
    //i还是可以改变的，只是i的值不能通过*p来修改
    i++;

    //判断方法，const在*的前面，表示它所指向的变量的值不能通过指针修改，const在*的后面，表示
    //指针所指向的地址不能被修改
    return 0;
}
