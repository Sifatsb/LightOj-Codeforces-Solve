#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double Log[1005000];

int main()
{
    int tc, j;
    long i, n, b;
    scanf("%d",&tc);

    for(i = 1; i <= 1000000; i++) Log[i] = log((i)) + Log[i-1];

    for(j = 1; j <= tc; j++)
    {
        scanf("%ld %ld",&n, &b);
        printf("Case %d: %ld\n",j,(long)(Log[n] / (Log[b] - Log[b-1])) + 1);
    }

    return 0;
}
