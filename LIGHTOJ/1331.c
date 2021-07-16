/*#include <stdio.h>
#include <math.h>
int main()
{
    double r1,r2,r3,x,y,z,X,Y,Z,area,s,area1;
    int test,i;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        x = r2 + r3;
        y = r1 + r3;
        z = r1 + r2;
        X = acos((y*y+z*z-x*x)/(2*y*z));
        Y = acos((z*z+x*x-y*y)/(2*x*z));
        Z = acos((x*x+y*y-z*z)/(2*x*y));
        s = (x+y+z)/2;
        area = sqrt(s*(s-x)*(s-y)*(s-z));
        area1 = area - (0.5)*(r1*r1*X+r2*r2*Y+r3*r3*Z);
        printf("Case %d: %.08lf\n",i,area1);
    }
    return 0;
}
*/

#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int t, i;
    double res, area, r1, r2, r3, a, b, c, A, B, C, R1, R2, R3, s;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lf %lf %lf",&r1, &r2, &r3);
        a = r1 + r2;
        b = r1 + r3;
        c = r2 + r3;

        A = acos((b*b + c*c - a*a) / (2*b*c)) * 180.0 / PI;
        B = acos((a*a + c*c - b*b) / (2*a*c)) * 180.0 / PI;
        C = acos((b*b + a*a - c*c) / (2*b*a)) * 180.0 / PI;

        R1 = 0.5 * (r1*r1) * (C*(PI/180.0));
        R2 = 0.5 * (r2*r2) * (B*(PI/180.0));
        R3 = 0.5 * (r3*r3) * (A*(PI/180.0));

        s= (a+b+c) / 2.0;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        res = area - (R1+R2+R3);

        printf("Case %d: %lf\n",i, res);
    }
    return 0;
}
