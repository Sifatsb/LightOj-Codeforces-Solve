#include<stdio.h>

int main()
{
    int i, t, n, ar[2050], j;
    scanf("%d",&t);

    for(i = 0; i < t; i++)
    {
        int sum = 0;
        scanf("%d",&n);
        for(j = 0; j < n; j++)
        {
            scanf("%d", &ar[j]);
            sum += ar[j];
        }
        if(sum % 2 != 0) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}
