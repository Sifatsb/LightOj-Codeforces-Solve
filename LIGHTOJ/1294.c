#include<stdio.h>

long long int sum(long long int n, long long int m)
{
    long long int s;
    s = (n/2) * m;
    return s;
}

int main()
{
    long long int n, m, d;
    int i, tc;
    scanf("%d",&tc);
    for(i = 1; i <= tc; i++)
    {
        scanf("%lld %lld",&n, &m);
        d = sum(n, m);
        printf("Case %d: %lld\n",i, d);
    }

    return 0;
}
