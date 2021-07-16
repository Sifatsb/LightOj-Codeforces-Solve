#include<stdio.h>

int main()
{
    long long int n, m, a, l, w;

    scanf("%lld %lld %lld",&n, &m, &a);
    l = n / a;
    w = m / a;
    if(n % a != 0) l++;
    if(m % a != 0) w++;

    printf("%d\n",l*w);

    return 0;
}
