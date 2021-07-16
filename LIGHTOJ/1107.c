#include<stdio.h>

int main()
{
    int tc, i, a, b, n,x1, y1, x2, y2, j;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j = 1; j <= n; j++)
        {
            scanf("%d %d",&a, &b);
            if((a >= x1 && a <= x2) && (b >= y1 && b <= y2)) printf("Yes\n");

            else printf("No\n");
        }
    }

    return 0;
}
