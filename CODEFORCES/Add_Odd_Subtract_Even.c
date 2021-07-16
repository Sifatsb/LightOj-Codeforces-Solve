#include<stdio.h>

int main()
{
    int a, b, t, i, res;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&a, &b);

        if(a == b) printf("0\n");
        else if(a > b)
        {
            res = a-b;
            if(res % 2 == 0) printf("1\n");
            else printf("2\n");
        }

        else if(a < b)
        {
            res = a-b;
            if(res % 2 == 0) printf("2\n");
            else printf("1\n");
        }
    }

    return 0;
}
