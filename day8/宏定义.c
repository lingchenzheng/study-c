#include <stdio.h>

/*
编译预处理指令：
#开头的是编译预处理指令
它们不是C语言的成分，但C语言路不开它们
#define来定义一个宏
    1.末尾没有分号，它不是C语句
    2.名字必须是一个单词，值可以是各种东西
    3.在C语言的编译器开始编译之前，预编译处理程序会把程序中的名字替换成值
    4.完全文本替换
    5.gcc --save-temps  //获取中间编译文件
*/

// const double PI = 3.14159;

//定义一个宏
#define PI 3.14159
//在宏中使用另一个宏
#define PI2 2 * PI
//定义多行宏
#define PRINT            \
    printf("PI=%f", PI); \
    printf("PI2=%f", PI2)
//没有值的宏，用来做条件编译
#define DEV
//带参数的宏
//原则：整个要有括号，参数要有括号
#define cube(x) ((x) * (x) * (x))
/*
C语言预定义的宏
__LINE__ :源代码的行号
__FILE__ :源代码文件的文件名全路径
__DATE__ :编译时的日期
__TIME__ :编译时的时间
__STDC__ :判断该文件是不是标准C程序
*/

int main(int argc, char const *argv[])
{
    printf("%d\n", cube(5));
    return 0;
}
