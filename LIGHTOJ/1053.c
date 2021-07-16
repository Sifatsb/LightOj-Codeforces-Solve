#include<stdio.h>

int main()
{
    long long int a, b, c, temp, two, one, tc, i;
    scanf("%lld",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%lld %lld %lld",&a, &b, &c);
        if(a >= b && a >= c)
        {
            temp = a;
            a = c;
            c = temp;
        }

        else if(b >= a && b >= c)
        {
            temp = b;
            b = c;
            c = temp;
        }

        two = (a*a)+(b*b);
        one = c*c;

        if(two == one) printf("Case %lld: yes\n",i);
        else printf("Case %lld: no\n",i);
    }

    return 0;
}
