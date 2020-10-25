#include <stdio.h>

/*
全局变量：定义在函数外面的变量
1.在没有初始化的全局变量会得到0值
2.指针会得到NULL值
3.它们的初始化发生在main函数之前
4.在局部作用域可以重新定义变量来隐藏全局变量
*/
int globalA = 23;
int main(int argc, char const *argv[])
{
    /* code */
    printf("in %s,globalA=%d\n", __func__, globalA);
    return 0;
}
