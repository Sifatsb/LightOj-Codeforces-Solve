#include<stdio.h>

int main()
{
    int i, sum = 0, count = 0, n, p, q, ar[31], tc, j;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d %d",&n, &p, &q);
        for(j = 0; j < n; j++)
        {
            scanf("%d",&ar[j]);
            sum += ar[j];
            if(count < p && sum <= q) count++;
        }
        printf("Case %d: %d\n",i, count);
        sum = 0, count = 0;
    }

    return 0;
}
