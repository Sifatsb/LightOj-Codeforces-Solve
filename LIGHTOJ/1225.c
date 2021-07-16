#include <stdio.h>
int main()
{
    unsigned long long int n, sum = 0, r, a, tc, i = 1;
    scanf("%llu", &tc);

    while(tc--)
    {
        scanf("%llu",&n);
        a = n;
        while( n!=0 )
        {
            r = n%10;
            sum = sum*10 + r;
            n /= 10;
        }

        if (a == sum) printf("Case %llu: Yes\n", i++);
        else printf("Case %llu: No\n", i++);

        sum = 0;
    }

    return 0;
}
