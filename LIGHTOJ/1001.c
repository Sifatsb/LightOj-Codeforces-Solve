#include <stdio.h>
int main()
{
    int t, i, n, r, e;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf ("%d", &n);
        if(n > 10)
        {
            r = n - 10;
            e = 10;
            printf("%d %d\n",r,e);
        }
        else
        {
            r = 0;
            printf("%d %d\n",r, n);
        }
    }
    return 0;
}
