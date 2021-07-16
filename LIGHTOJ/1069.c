#include<stdio.h>

int main()
{
    int tc, i, lp, mp, op;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d",&mp, &lp);
        if(mp >= lp)
        {
            op = (2 * mp - lp) * 4 + 19;
            printf("Case %d: %d\n",i, op);
        }
        else
        {
            op = lp * 4 + 19;
            printf("Case %d: %d\n",i, op);
        }
    }

    return 0;
}
