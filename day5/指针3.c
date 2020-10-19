#include <stdio.h>

int main(int argc, char const *argv[])
{
    //声明一个数组
    int a[] = {100, 200, 300};
    //数组变量是一种特殊的指针
    printf("a=%p\n", a); //打印变量所保存的地址值，因为它本身是指针，所以不需要使用取地址符

    //数组变量a保存的地址为数组a第一个单元的内存地址
    printf("a=%p\n", a);
    printf("a[0]=%p\n", &a[0]);

    //数组不能被重新赋值
    int b[3];
    //b = a;  错误
    //数组可以直接赋值给指针变量
    int *p;
    p = a;

    //通过指针获取数组元素的值，下面三种写法获得的结果一致
    printf("a[0]=%d\n", *a);
    printf("a[0]=%d\n", *p);
    printf("a[0]=%d\n", a[0]);

    return 0;
}
