/*#include<stdio.h>
#include<string.h>

int main()
{
    int tc, i, j;
    scanf("%d",&tc);
    for(i = 1; i <= tc; i++)
    {
        char n[10000];
        long long int div,temp = 0;
        scanf("%s %lld",n, &div);

        if(n[0] == '-') j=1;
        else j=0;
        for(j; j < strlen(n); j++)
        {
            temp = temp*10 + (n[j]-'0');
            temp = temp % div;
        }
        if(temp == 0) printf("Case %d: divisible\n",i);
        else printf("Case %d: not divisible\n",i);
    }
    return 0;
}*/

#include<stdio.h>
#include<string.h>

int main()
{
    long long int i, j, tc;
    scanf("%lld",&tc);

    for(i = 1; i <= tc; i++)
    {
        char n[250];
        long long int div, temp = 0;
        scanf("%s %lld",n, &div);
        if(n[0] == '-') j = 1;
        else j = 0;
        for(j ; j < strlen(n); j++)
        {
            temp = temp*10 + (n[j] - '0');
            temp = temp % div;
        }
        if(temp == 0) printf("Case %lld: divisible\n",i);
        else printf("Case %lld: not divisible\n",i);
    }

    return 0;
}
