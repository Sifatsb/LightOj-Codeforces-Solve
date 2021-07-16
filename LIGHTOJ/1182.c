#include<stdio.h>

int main()
{
    long long int n, tc, i, r;
    scanf("%lld",&tc);

    for(i = 1; i <= tc; i++)
    {
        int sum = 0;
        scanf("%lld",&n);
        while(n)
        {
            r = n % 2;
            sum += r;
            n /= 2;
        }
        if(sum % 2 == 1) printf("Case %lld: odd\n",i);
        else printf("Case %lld: even\n",i);
    }

    return 0;
}
