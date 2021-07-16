#include<stdio.h>
#include<math.h>

int main()
{
    int n, i;
    double r, cir, blue, pi;

    scanf("%d",&n);
    pi = 2 * acos(0.0);

    for(i = 1; i <= n; i++)
    {
        scanf("%lf",&r);
        cir = pi * (r*r);
        blue = (r*2) * (r*2);
        printf("Case %d: %.2lf\n",i, blue - cir);
    }

    return 0;
}
