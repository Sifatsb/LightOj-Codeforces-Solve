#include<stdio.h>
int main()
{
    int i, t, n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        int ar[n];

        for(i = 0; i < n; i++) scanf("%d",&ar[i]);

        if(ar[0]+ar[1] > ar[n-1]) printf("-1\n");
        else printf("%d %d %d\n",1, 2, n);
    }

    return 0;
}
