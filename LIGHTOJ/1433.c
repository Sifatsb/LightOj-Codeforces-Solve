#include<stdio.h>
#include<math.h>

int main()
{
    double ox, oy, ax, ay, bx, by, oa, ab, s, r, angle;
    int tc, i;
    scanf("%d",&tc);

    for (i = 1; i <= tc; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf",&ox, &oy, &ax, &ay, &bx, &by);

        oa = sqrt(((ax-ox) * (ax-ox)) + ((ay-oy) * (ay-oy)));
        r = oa;
        ab = sqrt(((bx-ax) * (bx-ax)) + ((by-ay) * (by-ay)));

        angle = acos(((r*r) + (r*r) - (ab*ab)) / (2*r*r));
        printf("Case %d: %lf\n",i, angle*r);
    }

    return 0;
}
