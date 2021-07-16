/*#include<stdio.h>
int main()
{
    int x, y, i, j, a, b, c, test, t = 0;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d %d",&x,&y);

        i=(x/3)*2;
        j=x%3;

        if(j==2)i++;

        a=(y/3)*2;
        b=y%3;

        if(b==2)a++;

        c=a-i;
        c++;

        if(j==1)c--;

        t++;

        printf("Case %d: %d\n",t,c);


    }
}
*/

/*#include<stdio.h>

int main()
{
    int x, y, tc, troi1, troi2, result, i;
    scanf("%d",&tc);

    for(i = 1; i <= 2; i++)
    {
        scanf("%d %d",&x, &y);
        troi1 = (x / 3) * 2;
        troi2 = (y / 3) * 2;

        if(x % 3 == 2) troi1++;
        if(y % 3 == 2) troi2++;

        result = troi2 - troi1;
        result++;
        if(x % 3 == 1) result--;

        printf("Case %d: %d\n",i, result);
    }

    return 0;
}*/

#include<stdio.h>

int div(int n)
{
    if (n == 0) return 0;

    int result;
    result = (n / 3) * 2;

    if (n % 3 == 2) result++;

    return result;
}

int main()
{

    int i, a, b, tc;

    scanf("%d", &tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d", &a, &b);

        printf("Case %d: %d\n", i, div(b) - div(a - 1));
    }
    return 0;
}

