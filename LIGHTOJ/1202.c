#include<stdio.h>

int main()
{
    int tc, r1, c1, r2, c2, i;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d %d %d",&r1, &c1, &r2, &c2);
        if(r1 == r2 && c1 == c2) printf("Case %d: 0\n",i);

        else if((r1 % 2 == 0 && c1 % 2 == 0)||(r1 % 2 == 1 && c1 % 2 == 1))
        {
            if((r2 % 2 == 0 && c2 % 2 == 0)||(r2 % 2 == 1 && c2 % 2 == 1))
            {
                if((r2 - r1 == c2 - c1)||(-(r2 - r1) == c2 - c1) || (r2 - r1 == -(c2-c1)) || (-(r2-r1) == -(c2-c1)))
                    printf("Case %d: 1\n",i);
                else printf("Case %d: 2\n",i);
            }
            else printf("Case %d: impossible\n",i);
        }

        else if((r1 % 2 == 0 && c1 % 2 == 1) || (r1 % 2 == 1 && c1 % 2 == 0))
        {
            if((r2 % 2 == 0 && c2 % 2 == 1) || (r2 % 2 == 1 && c2 % 2 == 0))
            {
                if((r2-r1 == c2-c1) || (-(r2-r1) == c2-c1) || (r2-r1 == -(c2-c1)) || (-(r2-r1) == -(c2-c1)))
                    printf("Case %d: 1\n",i);

                else printf("Case %d: 2\n",i);
            }
            else printf("Case %d: impossible\n",i);
        }
    }
}
