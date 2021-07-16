/*#include<stdio.h>

int main()
{
    int tc, i, n, j;
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d",&n);
        int ar[n], count = 0;
        for(j = 0; j < n; j++)
        {
            scanf("%d",&ar[j]);
        }
        for(j = 0; j < n; j++)
        {
            if(ar[j] < ar[j+1]) count++;
        }
        printf("Case %d: %d\n",i, count-1);
    }

    return 0;
}
*/

/*#include<stdio.h>
#include<math.h>

int main()
{
    int tc, i, t;
    scanf("%d",&tc);

    for(t = 1; t <= tc; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n+5];
        for(i = 1; i <= n; i++) scanf("%d",&a[i]);
        int l = 0, p = 2;

        for(i = 1; i <= n; i++)
        {
            if(a[i] > p)
            {
                l += ceil((a[i]-p)/5.0);
                p = a[i];
            }
        }
        printf("Case %d: %d\n",t,l);
    }

    return 0;
}


#include<stdio.h>

int main()
{
    int n, i, tc;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&n);
        int ar[n];

        for(i = 0; i < n; i++) scanf("%d",&ar[i]);

        printf("%d\n",ar[n-1] - ar[0]);
    }

    return 0;
}

*/


#include<stdio.h>
#include<math.h>

int main()
{
    int tc, i, t;
    scanf("%d",&tc);

    for(t = 1; t <= tc; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n+5];

        for(i = 1; i <= n; i++) scanf("%d",&a[i]);
        int l = 0, p = 2;

        for(i = 1; i <= n; i++)
        {
            if(a[i] > p)
            {
                l += ceil((a[i]-p)/5.0);
                p = a[i];
            }
        }
        printf("Case %d: %d\n",t, l);
    }

    return 0;
}

