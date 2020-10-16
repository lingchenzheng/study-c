#include <stdio.h>


//使用辗转相除法
int main() {
    int a,b,t;

    scanf("%d %d",&a,&b);

    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    printf("最大公约数为%d",a);    
    return 0;
}