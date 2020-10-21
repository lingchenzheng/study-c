#include <stdio.h>

struct time
{
    int hour;
    int miniute;
    int second;
};
int main(int argc, char const *argv[])
{
    struct time tlist[3] = {
        {16, 23, 45},
        {18, 23, 56},
        {22, 30, 15}};
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("h=%d,m=%d,s=%d\n", tlist[i].hour, tlist[i].miniute, tlist[i].second);
    }
    return 0;
}
