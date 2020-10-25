#include <stdio.h>

/*
局部变量在函数执行完后会销毁，静态局部变量不会
静态变量有全局的生存期，有局部的作用域
*/
void f();
int main(int argc, char const *argv[])
{
    /* code */
    f(); //2
    f(); //4
    f(); //6
    return 0;
}

void f()
{
    static int i = 0;
    i += 2;
    printf("i=%d\n", i);
}

/*
后记
1.返回本地变量的地址是危险的
2.返回全局变量和静态变量的地址是安全的
3.返回在函数内malloc的内存是安全的，但容易造成问题
4.最好的做法是返回传入的指针
*/