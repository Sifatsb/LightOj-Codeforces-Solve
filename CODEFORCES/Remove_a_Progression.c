#include<stdio.h>

int main()
{
    int tc, n, p;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d %d",&n, &p);
        printf("%d\n",2*p);
    }

    return 0;
}
