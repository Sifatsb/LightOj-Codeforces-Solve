#include<stdio.h>
int main()
{

    long long int t;
    scanf("%lld", &t);
    while(t--)
    {


        int n, i, flag = 0;

        scanf("%d", &n);
        int ar[n];

        for(i=0 ; i<=n-1 ; i++)
        {
            scanf("%lld", &ar[i]);
        }

        for(i=0 ; i<=n-2 ; i++)
        {
            if (ar[i] != ar[i+1])

                flag = 1;


        }
        if (flag == 1)
            printf("1\n");
        else
            printf("%d\n", n);


    }
    return 0;
}
