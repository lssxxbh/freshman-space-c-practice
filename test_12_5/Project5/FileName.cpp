#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct {
    double top;
    double bottom;
    double left;
    double right;
}lq;
double max(double x, double y)
{
    double z;
    if (x >= y) z = x;
    else z = y;
    return z;
}
double min(double x, double y)
{
    double z;
    if (x < y) z = x;
    else z = y;
    return z;
}
lq lhz(lq x, lq y)
{
    lq z;
    if ((x.bottom >= y.top) || (y.bottom >= x.top)) { printf("该矩形不存在2\n"); }
    else if ((y.left >= x.right) || (x.left >= y.right)) { printf("该矩形不存在1\n"); }
    else
    {
        z.left = max(x.left, y.left);
        z.right = min(x.right, y.right);
        z.top = min(x.top, y.top);
        z.bottom = max(x.bottom, y.bottom);
        double e[2] = { z.left,z.bottom };
        double f[2] = { z.left,z.top };
        double g[2] = { z.right,z.bottom };
        double h[2] = { z.right,z.top };
        printf("左下定点为(%f,%f)\n", e[0], e[1]);
        printf("左上定点为(%f,%f)\n", f[0], f[1]);
        printf("右下定点为(%f,%f)\n", g[0], g[1]);
        printf("右上定点为(%f,%f)\n", h[0], h[1]);
    }
    return z;
}
double main()
{
    lq a;
    lq b;
    printf("请输入第一个矩形的上下左右边界值");
    scanf("%lf%lf%lf%lf", &a.top, &a.bottom, &a.left, &a.right);
    printf("请输入第二个矩形的上下左右边界值");
    scanf("%lf%lf%lf%lf", &b.top, &b.bottom, &b.left, &b.right);
    lq c;
    c = lhz(a, b);
    return 0;
}