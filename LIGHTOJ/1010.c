/*#include<stdio.h>

int main()
{
    long long int i, m, n, tc;
    scanf("%lld",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%lld %lld",&m, &n);
        if((m*n) % 2 == 0) printf("Case %lld: %lld\n",i, (m*n)/2);
        else printf("Case %lld: %lld\n",i, ((m*n)/2)+1);
    }

    return 0;
}
*/

#include<stdio.h>

int main()
{
    int test, i;
    scanf("%d",&test);

    for(i = 1; i <= test; i++)
    {
        int m, n, res, temp;
        scanf("%d %d",&m, &n);

        if(m == 1 || n == 1) res = m*n;
        else if(m == 2 || n == 2)
        {
            if(n < m)
            {
                temp = m;
                m = n;
                n = temp;
            }
            if(n % 2 == 0)
            {
                int s = n / 2;
                if(s % 2 == 0) res = s*2;
                else res = (s*2) + 2;;
            }
            else res = n+1;
        }
        else if(m % 2 != 0 && n % 2 != 0) res = ((m*n)+1)/2;
        else res = (m*n)/2;

        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
