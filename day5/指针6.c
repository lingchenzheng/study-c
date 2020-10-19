#include <stdio.h>
#include <stdlib.h>

/*
动态内存分配：malloc
1.malloc向内存申请空间是以字节为单位
2.返回的结果是void*类型，需要类型转换成自己需要的类型
3.如果申请失败，则会返回0或者说是NULL
4.每次用完需要释放：free
5.建议指针变量初始化为0
*/
int main(int argc, char const *argv[])
{
    //C99之前动态定义数组

    int num;
    int *arr;
    int i;
    //输入需要定义的数组长度
    scanf("%d", &num);
    //根据输入的长度定义数组
    //int arr[num] //C99定义方法
    arr = (int *)malloc(num * sizeof(int));
    //向数组的每个元素输入值
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    //用完后需要释放
    free(arr);
    return 0;
}
