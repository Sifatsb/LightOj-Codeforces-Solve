#include<stdio.h>

int main()
{
    long long int i, n, k, j, p, max;
    int t;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld", &n, &k);
        long long int ar[n], arr[n];

        for(i = 0; i < n; i++) scanf("%lld", &ar[i]);

        max = ar[0];
        for(i = 0; i < n; i++)
        {
            if(max < ar[i]) max = ar[i];
        }

        if(n == 1) printf("0\n");

        else
        {
            if(k%2 != 0)
            {
                for(j = 0; j < n; j++)
                {
                    arr[j] = max - ar[j];
                }
                for(p = 0; p < n; p++) printf("%lld ",arr[p]);

                printf("\n");
            }


            else
            {
                max = arr[0];
                for(i = 0; i < n; i++)
                {
                    if(max < arr[i]) max = arr[i];
                }
                for(j = 0; j < n; j++)
                {
                    ar[j] = max - ar[j];
                }
                for(p = 0; p < n; p++) printf("%lld ",ar[p]);

                printf("\n");

            }
        }


    }

    return 0;
}
