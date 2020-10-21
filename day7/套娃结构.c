#include <stdio.h>

//套娃结构

struct point
{
    int x;
    int y;
};
struct geometry
{
    struct point p1;
    struct point p2;
};

int main(int argc, char const *argv[])
{
    struct geometry g = {{100, 25}, {200, 45}};
    printf("g.p1.x=%d,g.p1.y=%d\n", g.p1.x, g.p1.y);
    struct geometry *gp = &g;
    printf("g.p1.x=%d,g.p1.y=%d\n", (*gp->p1).x, (*gp->p1).y);
    return 0;
}
