#include <stdio.h>
/*
char **a;
a是一个指针，指向另一个指针，那个指针指向一个字符(串)

数组指针：
数组指针（也称行指针）
定义 int (*p)[n];
()优先级高，首先说明p是一个指针，指向一个整型的一维数组，这个一维数组的长度是n，也可以说是p的步长。
也就是说执行p+1时，p要跨过n个整型数据的长度。

指针数组：
定义 int *p[n];
[]优先级高，先与p结合成为一个数组，再由int*说明这是一个整型指针数组，它有n个指针类型的数组元素。
这里执行p+1时，则p指向下一个数组元素，这样赋值是错误的：p=a；因为p是个不可知的表示，只存在p[0]、p[1]、p[2]...p[n-1],而且它们分别是指针变量可以用来存放变量地址。但可以这样 *p=a; 这里*p表示指针数组第一个元素的值，a的首地址的值。
*/
int main(int argc, char const *argv[])
{
    //数组指针(行指针)
    int a[3][4];
    int(*p)[4]; //定义一个数组指针，指向含4个元素的一维数组
    p = a;      //将该数组的首地址赋值给变量p，即p = a[0]或&a[0][0]
    p++;        //表示p跨过&a[0][]，指向了&a[1][]

    //指针数组(元素是指针的数组)
    int b[3][4];
    int i;
    int *q[3]; //定义一个数组，它的每一个元素都是一个指针
    for (i = 0; i < 3; i++)
    {
        q[i] = b[i];
        //或者
        //q[i] = &b[i][0];
    }
    return 0;
}
