#include<stdio.h>
int main()
{
    int tc, i , n;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d",&n);

        if(n%4 != 0) printf("NO\n");
        else{
            printf("YES\n");
            int sum = 0;
            int k = 2;
            for(i=0; i<n/2; i++)
            {
                printf("%d",k);
                sum += k;
                k += 2;
                printf(" ");
            }
            k = 1;
            for(i = n/2; i<n-1; i++)
            {
                printf("%d",k);
                sum -= k;
                k += 2;
                printf(" ");
            }
            printf("%d\n",sum);
        }
    }

    return 0;
}
