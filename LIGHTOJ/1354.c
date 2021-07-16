#include<stdio.h>

int binary(int n)
{
    int res = 0, b = 1, r;
    while(n > 0)
    {
        r = n % 2;
        res += r * b;
        b *= 10;
        n /= 2;
    }
    return res;
}

int main()
{
    int i, n, tc, d1, d2, d3, d4, b1, b2, b3, b4;
    int B1, B2, B3, B4;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d.%d.%d.%d",&d1, &d2, &d3, &d4);
        scanf("%d.%d.%d.%d",&b1, &b2, &b3, &b4);

        B1 = binary(d1);
        B2 = binary(d2);
        B3 = binary(d3);
        B4 = binary(d4);

        if(b1 == B1 && b2 == B2 && b3 == B3 && b4 == B4) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }

    return 0;
}


#include <stdio.h>
int DecBin(int n)
{
        int multiplier = 1,result = 0;
        while(n>0)
        {

        result+=n%2*multiplier;
        multiplier*=10;
        n/=2;

        }
        return result;


}
/*int main()
{
        int T,da,db,dc,dd,ba,bb,bc,bd;
        scanf("%d",&T);
        int i;
        for(i =0; i<T;i++)
        {
                scanf("%d.%d.%d.%d",&da,&db,&dc,&dd);
                scanf("%d.%d.%d.%d",&ba,&bb,&bc,&bd);

                if(DecBin(da)==ba&&DecBin(db)==bb&&DecBin(dc)==bc&&DecBin(dd)==bd)
                printf("Case %d: Yes\n",i+1);
                else
                printf("Case %d: No\n",i+1);

        }
        return 0;


}*/
