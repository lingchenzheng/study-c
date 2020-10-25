void test();
extern int gAll;

//条件编译，标准头文件，先判断有没有声明，没有的才声明
#ifndef __DEV__
#define __DEV
#endif // DEBUG