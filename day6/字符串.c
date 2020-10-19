#include <stdio.h>

/*
C语言中，字符串以字符数组的形式存在
不能用运算符对字符串进行运算
通过数组的形式可以遍历字符串
*/
void f();
int main(int argc, char const *argv[])
{
    //'\0'和0是一样的，表示字符串的结尾，但它不是字符串的一部分
    char str[] = {'a', 'b', 'c', '\0'};

    //不同的形式定义字符串变量

    //1
    char *s1 = "hello";
    //2
    char s2[] = "hello";
    //3
    char s3[10] = "hello";
    f();

    //输入输出字符串
    char string[8];
    //scanf("%s", string);
    //printf("%s\n", string);
    //scanf("%7s",string); 读7个
    return 0;
}

void f()
{
    char *s1 = "hello";
    char *s2 = "hello";
    char *s3 = "hellk";
    char s4[] = "hello";
    printf("s1=%p\n", s1);
    printf("s2=%p\n", s2);
    printf("s3=%p\n", s3);
    printf("s4=%p\n", s4);

    //s1与2指向同一个地方
    //指针形式的表示字符串常量，不能被修改
    //s1[0] = 'A'; //error
    s4[0] = 'A'; //OK
}