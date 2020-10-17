#include <stdio.h>

/*
二维数组可以理解为矩阵
*/

int main(int argc, char const *argv[])
{
    //声明二维数组，列数可以省略，行数不能省略
    int a[][4] = {
        {1, 2, 3, 4},
        {0},
        {1}};
    //遍历数组
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("a[%d][%d]=%d", i, j, a[i][j]);
        }
    }
    return 0;
}
