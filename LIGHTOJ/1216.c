#include<stdio.h>
#include<math.h>

int main()
{
    int i, tc;
    double r,ans, pi, r1, r2, h, p;
    pi = 2 * acos(0.0);
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%lf %lf %lf %lf",&r1, &r2, &h, &p);
        //r = (r2 + (r1 - r2) * p) / h;
        //ans = (pi / 3.0) * p * ( r1*r1 + r2*r2 + r1*r2);

        r = r2 + (r1 - r2) * p / h;
        ans = 1 / 3.0 * pi * p *( r*r + r*r2 + r2*r2 );

        printf("Case %d: %.9lf\n",i,ans);
        ans = 0;
    }

    return 0;
}
