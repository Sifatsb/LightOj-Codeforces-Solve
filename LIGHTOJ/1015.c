#include<stdio.h>

int main()
{
    int tc, n, dust, i, j;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        int sum = 0;
        scanf("%d",&n);
        for(j = 1; j <= n; j++)
        {
            scanf("%d",&dust);
            if(dust > 0) sum += dust;
        }

        printf("Case %d: %d\n",i, sum);
    }

    return 0;
}
