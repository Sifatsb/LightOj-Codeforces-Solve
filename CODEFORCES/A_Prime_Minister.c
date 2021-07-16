#include<stdio.h>

int main()
{
    int n, i, a[102];
    scanf("%d", &n);

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    int k = 1, sum = 0;
    for(i = 0; i < n; i++)
    {
        if(i > 0 && a[i] < a[0]) sum += a[i];
        if((a[i]*2) <= a[0]) k++;
    }
    if(sum > a[0]) printf("0");
    else
    {
        printf("%d\n", k);
        if(k == 1) printf("1");
        else if(k > 1)
        {
            printf("1 ");
            for(i = 0; i < n; i++)
            {
                if((a[i]*2) <= a[0])
                {
                    printf("%d ", i+1);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
