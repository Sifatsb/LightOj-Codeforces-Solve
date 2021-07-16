#include<stdio.h>
int main()
{
    int t;
    long long int a, b, c, d;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&a, &b, &c);
        d = a+b+c;
        printf("%lld\n",d-1);
    }

    return 0;
}
