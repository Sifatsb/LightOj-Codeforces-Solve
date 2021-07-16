#include<stdio.h>

int main()
{
    unsigned long long int a, b, c;
    scanf("%llu %llu",&a, &b);

    c = (a*b) * (a*b);
    printf("%llu\n",c);

    return 0;
}
