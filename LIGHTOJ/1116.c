#include<stdio.h>

int main()
{
    unsigned long long int n, tc, i = 1, a, sum;
    scanf("%llu",&tc);

    while(tc--)
    {
        scanf("%llu",&n);
        if(n % 2 == 1) printf("Case %llu: Impossible\n", i++);

        else
        {
            sum = 1;
            while(n % 2 != 1)
            {
                n /= 2;
                sum *= 2;
            }
            printf("Case %llu: %llu %llu\n", i++, n, sum);
        }
    }

    return 0;
}
