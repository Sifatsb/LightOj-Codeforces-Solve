#include<stdio.h>
int main()
{
    long long int count = 0, t, n, i, j;
    scanf("%lld",&t);
    for(i = 0; i < t; i++)
    {
        scanf("%lld", &n);
        if(n % 2 != 0) printf("YES\n");

        else
        {
            count = 0;
            for(j = 3; j < 10; j += 2)
            {
                if(n % j == 0) count++;

            }
            if(count>0) printf("YES\n");

            else printf("NO\n");
        }
    }

}
