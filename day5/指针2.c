#include <stdio.h>

void swap(int *pa, int *pb);
void minmax(int arr[], int len, int *max, int *min);
int main(int argc, char const *argv[])
{
    //案例一
    int a = 5;
    int b = 6;
    //交换两个变量的值
    swap(&a, &b);
    printf("a=%d,b=%d", a, b);

    //案例二
    int arr[] = {3, 1, 5, 6, 8};
    int *max, *min;
    minmax(arr, sizeof(arr) / sizeof(arr[0]), max, min);
    return 0;
}

//1.交换两个变量的值

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

//2.当函数需要返回多个值时，通过指针带回，如下，求最大值和最小值

void minmax(int arr[], int len, int *max, int *min)
{
    int i;
    *max = *min = arr[0];

    for (i = 0; i < len; i++)
    {
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
    }
}