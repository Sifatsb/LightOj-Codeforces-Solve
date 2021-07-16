#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ax, ay, bx, by, cx, cy, area, tc, i, dx, dy, a, b;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d %d %d %d %d",&ax, &ay, &bx, &by, &cx, &cy);

        dx = ax - bx + cx;
        dy = ay - by + cy;

        a = ax*by + bx*cy + cx*dy + dx*ay;
        b = ay*bx + by*cx + cy*dx + dy*ax;
        area = abs(a - b);

        printf("Case %d: %d %d %d\n",i, dx, dy, area/2);
    }

    return 0;
}
