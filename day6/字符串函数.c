#include <stdio.h>
#include <string.h>
void f1();
void f2();
int main(int argc, char const *argv[])
{
    f1();
    f2();
    return 0;
}

/*
size_t strlen(const char *s);
返回可见字符串的长度
*/
void f1()
{
    char a[] = "hello";
    printf("len=%lu", strlen(a)); //5
}

/*
int strcmp(const char *s1,const char *s2);
比较两个字符串
s1==s2 => 0
s1 > s2 => 1
s1 < s2 => -1
*/
void f2()
{
    char *s1 = "abc";
    char *s2 = "abc";
    char *s3 = "bbc";
    printf("s1cmps2=%d\n", strcmp(s1, s2));
    printf("s1cmps3=%d\n", strcmp(s1, s3));
}

/*
char * strcpy(char *restrict dest,const char *restrict src);
把第二个变量字符串拷贝到第一个变量里面
restrict表明src和dest不重叠(C99)
返回dest
*/

/*
char* strcat(char *restrict dest,const char *restrict src);
将src拷贝到dest后面
返回dest
*/