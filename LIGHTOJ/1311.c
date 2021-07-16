#include<stdio.h>

int main()
{
    double a1, a2, v1, v2, v3, t1, t2, s, s1, s2, temp;
    int i, tc;
    scanf("%d", &tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%lf %lf %lf %lf %lf",&v1, &v2, &v3, &a1, &a2);
        t1 = v1 / a1;
        t2 = v2 / a2;

        if(t1 >= t2) temp = t1;
        else temp = t2;

        s1 = ((v1 * v1) / (double)(2 * a1));
        s2 = ((v2 * v2) / (double)(2 * a2));
        s = v3 * temp;

        printf("Case %d: %lf %lf\n",i, s1+s2, s);
    }

}
