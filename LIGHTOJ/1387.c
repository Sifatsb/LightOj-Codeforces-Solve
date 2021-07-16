#include<stdio.h>
#include<string.h>

int main()
{
    long long int tc, n, i, j, sum = 0, k;
    char str[20];
    scanf("%lld",&tc);

    for(i = 1; i <= tc; i++)
    {
        printf("Case %d:\n",i);
        scanf("%lld",&n);
        for(j = 1; j <= n; j++)
        {
            scanf("%s",str);
            if(str[0] == 'd')
            {
                scanf("%lld",&k);
                sum = sum + k;
            }

            else printf("%lld\n",sum);
        }
        sum = 0;
    }

    return 0;
}
